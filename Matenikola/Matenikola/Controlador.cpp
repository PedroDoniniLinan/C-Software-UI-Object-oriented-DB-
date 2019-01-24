#include "Controlador.h"





Controlador::Controlador() 
{

}

Controlador::~Controlador() 
{

}

PessoaFisica* Controlador::pessoaFisicaExiste(string cpf) {
	PFDAO * pfdao = new PFDAO();
	PessoaFisica * pf = pfdao->pfExiste(cpf);
	if (pf == nullptr) {
		return NULL;
	}
	else {
		return pf;
	}
}

PessoaJuridica* Controlador::pessoaJuridicaExiste(string cnpj) {
	PJDAO * pjdao = new PJDAO();
	PessoaJuridica * pj = pjdao->pjExiste(cnpj);
	if (pj == nullptr) {
		return NULL;
	}
	else {
		return pj;
	}
}

Motor* Controlador::motorExiste(string numeroSerie) {
	MotorDAO * motdao = new MotorDAO();
	Motor * mot = motdao->motorExiste(numeroSerie);
	if (mot == nullptr) {
		return NULL;
	}
	else {
		return mot;
	}
}

Atendimento* Controlador::atendimentoExiste(string protocolo) {
	AtendimentoDAO * atdao = new AtendimentoDAO();
	Atendimento * at = atdao->AtendimentoExiste(protocolo);
	if (at == nullptr) {
		return NULL;
	}
	else {
		return at;
	}
}

void Controlador::cadastrarPF(string cpf, string telefone, string nome, string email, string logradouro, string cep, string complemento) {
	PessoaFisica * pf = new PessoaFisica(cpf);
	Endereco * end = new Endereco(cep, logradouro, complemento);
	pf->cadastrarPF(telefone, nome, email, end);
	PFDAO * pfdao = new PFDAO();
	pfdao->cadastrarPF(pf);
	delete pf;
	delete end;
	delete pfdao;
	return;
}

void Controlador::cadastrarPJ(string cnpj, string telefone, string nome, string email, string logradouro, string cep, string complemento) {
	PessoaJuridica * pj = new PessoaJuridica(cnpj);
	Endereco * end = new Endereco(cep, logradouro, complemento);
	pj->cadastrarPJ(telefone, nome, email, end);
	PJDAO * pjdao = new PJDAO();
	pjdao->cadastrarPJ(pj);
	delete pj;
	delete end;
	delete pjdao;
	return;
}

void Controlador::cadastrarMotor(string modelo, string numeroSerie, string novo, string estado, string cpf, string cnpj) {
	Motor * mot = new Motor(numeroSerie);
	if (cnpj == "0") {
		PessoaFisica * pf = new PessoaFisica(cpf);
		mot->cadastrarMotor(modelo, pf, NULL);
	}
	else if (cpf == "0") {
		PessoaJuridica * pj = new PessoaJuridica(cnpj);
		mot->cadastrarMotor(modelo, NULL, pj);
	}
	mot->setNovo(novo);
	mot->setEstado(estado);
	MotorDAO * motdao = new MotorDAO();
	motdao->cadastrarMotor(mot);
	delete motdao;
	delete mot;
	return;
}

void Controlador::cadastrarEntrada(string protocolo, string prioridade, string dataEntrada, string numeroSerie) {
	Atendimento * at = new Atendimento(protocolo);
	Motor * mot = new Motor(numeroSerie);
	at->cadastrarEntrada(protocolo, prioridade, dataEntrada, mot);
	AtendimentoDAO * atdao = new AtendimentoDAO();
	atdao->cadastrarEntrada(at);
	delete at;
	delete mot;
	delete atdao;
	return;
}


void Controlador::consultarAtendimentos(string modelo, string falha) {
	AtendimentoDAO * atdao = new AtendimentoDAO();
	atdao->consultar(modelo, falha);
	for (std::list<string>::iterator it = atdao->prot.begin(); it != atdao->prot.end(); it++)
	{
		protocolos.push_front(*it);
	}
}

void Controlador::consultarFalhas() {
	ModoFalhaDAO * mfdao = new ModoFalhaDAO();
	mfdao->consultarModosFalha();
	for (std::list<string>::iterator it = mfdao->nomes.begin(); it != mfdao->nomes.end(); it++)
	{
		mfs.push_front(*it);
	}
}

void Controlador::consultarModelos() {
	MotorDAO * motdao = new MotorDAO();
	motdao->consultaModelos();
	for (std::list<string>::iterator it = motdao->modelos.begin(); it != motdao->modelos.end(); it++)
	{
		modelos.push_front(*it);
	}
}