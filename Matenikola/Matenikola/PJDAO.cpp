#include "PJDAO.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

//Begin section for file PJDAO.cpp
//TODO: Add definitions that you want preserved
//End section for file PJDAO.cpp



PJDAO::PJDAO()
{
	//TODO Auto-generated method stub
}

PJDAO::~PJDAO()
{
	//TODO Auto-generated method stub
}

PessoaJuridica * PJDAO::pjExiste(string cnpj)
{
	PessoaJuridica * pj = nullptr;
	Endereco * end = nullptr;
	try {
		sql::Connection * cpeju0 = MyDAO::getInstance()->getConnection();
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = cpeju0->createStatement();
		res = stmt->executeQuery("SELECT cnpj, telefone, nome, email, cep, logradouro, complemento from pessoajuridica where cnpj  = '" + cnpj + "'");

		while (res->next()) {
			pj = new PessoaJuridica(cnpj);
			end = new Endereco(res->getString("cep"), res->getString("logradouro"), res->getString("complemento"));
			pj->cadastrarPJ(res->getString("telefone"), res->getString("nome"), res->getString("email"), end);
		}
		delete res;
		delete stmt;
		//cpeju0->close();
	}
	catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << endl;

		return nullptr;
	}
	cout << "Done::pjExiste" << endl;
	return pj;
}

void PJDAO::cadastrarPJ(PessoaJuridica * pj)
{
	try {
		sql::Connection * cpeju1 = MyDAO::getInstance()->getConnection();
		sql::Statement *stmt;
		stmt = cpeju1->createStatement();
		string cnpj = pj->getCNPJ();
		string telefone = pj->getTelefone();
		string nome = pj->getNome();
		string email = pj->getEmail();
		Endereco * end = pj->getEndereco();
		EnderecoDAO *enddao = new EnderecoDAO();
		Endereco * end2 = enddao->enderecoExiste(end->getCEP(), end->getLogradouro(), end->getComplemento());
		if (end2 == nullptr) enddao->cadastrarEndereco(end);
		string cep = end->getCEP();
		string logradouro = end->getLogradouro();
		string complemento = end->getComplemento();
		stmt->execute("INSERT INTO PessoaJuridica(cnpj, telefone, nome, email, cep, logradouro, complemento) VALUES ('" + cnpj + "','" + telefone + "','" + nome + "','" + email + "','" + cep + "','" + logradouro + "','" + complemento + "')");
		//cpeju1->close();
	}
	catch (sql::SQLException &e) {

	}
	return;
}