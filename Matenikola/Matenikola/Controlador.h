#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <msclr\marshal_cppstd.h>
#include <string>
#include <list>

#include "PessoaFisica.h"
#include "PessoaJuridica.h"
#include "Endereco.h"
#include "Motor.h"
#include "Atendimento.h"

#include "PFDAO.h"
#include "PJDAO.h"
#include "MotorDAO.h"
#include "AtendimentoDAO.h"
#include "ModoFalhaDAO.h"

using namespace System;
using namespace std;

class Controlador
{
	public: 
        Controlador(); 
        ~Controlador(); 

		PessoaFisica* pf;
		PessoaJuridica* pj;
		Endereco* end;
		Motor* mt;
		Atendimento* at;

		list<string> protocolos;
		list<string> mfs;
		list<string> modelos;

		PessoaFisica* pessoaFisicaExiste(string cpf);
		PessoaJuridica* pessoaJuridicaExiste(string cnpj);
		Motor* motorExiste(string numeroSerie);
		Atendimento* atendimentoExiste(string protocolo);

		void cadastrarEntrada(string protocolo, string prioridade, string dataEntrada, string numeroSerie);
		void cadastrarPF(string cpf, string telefone, string nome, string email, string logradouro, string cep, string complemento);
		void cadastrarPJ(string cnpj, string telefone, string nome, string email, string logradouro, string cep, string complemento);
		void cadastrarMotor(string modelo, string numeroSerie, string novo, string estado, string cpf, string cnpj);

		void consultarAtendimentos(string modelo, string falha);
		void consultarFalhas();
		void consultarModelos();
	
};  //end class Controlador



#endif
