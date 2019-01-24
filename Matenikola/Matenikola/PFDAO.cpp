#include "PFDAO.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

PFDAO::PFDAO()
{
	
}

PFDAO::~PFDAO()
{
	
}

PessoaFisica* PFDAO::pfExiste(string cpf)
{
	PessoaFisica * pf = nullptr;
	Endereco * end = nullptr;
	try {
		sql::Connection * cpefi0 = MyDAO::getInstance()->getConnection();
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = cpefi0->createStatement();
		res = stmt->executeQuery("SELECT cpf, telefone, nome, email, cep, logradouro, complemento from pessoafisica where cpf  = '" + cpf +"'");

		while (res->next()) {
			pf = new PessoaFisica(cpf);
			end = new Endereco(res->getString("cep"), res->getString("logradouro"), res->getString("complemento"));
			pf->cadastrarPF(res->getString("telefone"), res->getString("nome"), res->getString("email"), end);
		}
		delete res;
		delete stmt;
		//cpefi0->close();
	}
	catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << endl;

		return nullptr;
	}
	cout << "Done::pfExiste" << endl;
	return pf;
}

void PFDAO::cadastrarPF(PessoaFisica * pf)
{
	try {
		string cpf = pf->getCPF();
		string telefone = pf->getTelefone();
		string nome = pf->getNome();
		string email = pf->getEmail();
		Endereco * end = pf->getEndereco();
		EnderecoDAO *enddao = new EnderecoDAO();
		Endereco * end2 = enddao->enderecoExiste(end->getCEP(), end->getLogradouro(), end->getComplemento());
		if (end2 == nullptr) enddao->cadastrarEndereco(end);
		sql::Connection * cpefi1 = MyDAO::getInstance()->getConnection();
		sql::Statement *stmt;
		stmt = cpefi1->createStatement();
		string cep = end->getCEP();
		string logradouro = end->getLogradouro();
		string complemento = end->getComplemento();
		stmt->execute("INSERT INTO PessoaFisica(cpf, telefone, nome, email, cep, logradouro, complemento) VALUES ('" + cpf + "','" + telefone + "','" + nome + "','" + email + "','" + cep + "','" + logradouro + "','" + complemento + "')");		
		//cpefi1->close();
	}
	catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << endl;

		return;
	}
	return;
}

