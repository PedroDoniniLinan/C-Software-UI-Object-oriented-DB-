#include "MotorDAO.h"
#include "Motor.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

//Begin section for file MotorDAO.cpp
//TODO: Add definitions that you want preserved
//End section for file MotorDAO.cpp

MotorDAO::MotorDAO() {

}

MotorDAO::~MotorDAO() {

}

Motor* MotorDAO::motorExiste(string numeroSerie)
{
	Motor * mot = nullptr;
	PessoaFisica * pf = nullptr;
	PessoaJuridica * pj = nullptr;
	try {
		sql::Connection * cmot0 = MyDAO::getInstance()->getConnection();
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = cmot0->createStatement();
		res = stmt->executeQuery("SELECT numeroSerie, novo, modelo, dataDesativacao, estado, cnpj, cpf from motor where numeroSerie  = '" + numeroSerie + "'");

		while (res->next()) {
			mot = new Motor(numeroSerie);
			mot->setEstado(res->getString("estado"));
			if (res->getString("cnpj") == "0") {
				pf = new PessoaFisica(res->getString("cpf"));
				pj = NULL;
			}
			else if (res->getString("cpf") == "0") {
				pj = new PessoaJuridica(res->getString("cnpj"));
				pf = NULL;
			}
			mot->cadastrarMotor(res->getString("modelo"), pf, pj);
		}
		delete res;
		delete stmt;
		//cmot0->close();
	}
	catch (sql::SQLException &e) {
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << endl;

		return nullptr;
	}
	cout << "Done::EnderecoExiste" << endl;
	return mot;
}

void MotorDAO::cadastrarMotor(Motor * mot) {
	try {
		string modelo = mot->getModelo();
		string numeroSerie = mot->getNumeroSerie();
		string novo = mot->getNovo();
		string estado = mot->getEstado();
		PessoaFisica * pf = mot->getPF();
		string cpf, cnpj;
		PessoaJuridica * pj = mot->getPJ();
		if (pj == NULL) {
			cpf = pf->getCPF();
			cnpj = "0";
		}
		else {
			cpf = "0";
			cnpj = pj->getCNPJ();
		}
		//Endereco * end = pf->getEndereco();
		sql::Connection * cmot1 = MyDAO::getInstance()->getConnection();
		sql::Statement *stmt;
		stmt = cmot1->createStatement();
		stmt->execute("INSERT INTO Motor(modelo, numeroSerie, novo, estado, cpf, cnpj) VALUES ('" + modelo + "','" + numeroSerie + "','" + novo + "','" + estado + "','" + cpf + "','" + cnpj + "')");
		//cmot1->close();
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

void MotorDAO::atualizaEstado(Motor * mot) {
	string numeroSerie = mot->getNumeroSerie();
	string estado = mot->getEstado();
	sql::Connection * cmot2 = MyDAO::getInstance()->getConnection();
	sql::Statement *stmt;
	stmt = cmot2->createStatement();
	stmt->execute("UPDATE motor SET estado = '" + estado + "' WHERE numeroSerie = '" + numeroSerie + "'");
	//cmot2->close();
}

void MotorDAO::consultaModelos(){
	try {
		sql::Connection * cmot3 = MyDAO::getInstance()->getConnection();
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = cmot3->createStatement();
		res = stmt->executeQuery("SELECT DISTINCT modelo FROM motor");
		while (res->next()) {
			modelos.push_front(res->getString("modelo"));
		}
	}
	catch (sql::SQLException &e) {

	}
}
