#include "ModoFalhaDAO.h"


ModoFalhaDAO::ModoFalhaDAO()
{

}

ModoFalhaDAO::~ModoFalhaDAO()
{

}

void ModoFalhaDAO::consultarModosFalha()
{
	try {
		sql::Connection * cmf0 = MyDAO::getInstance()->getConnection();
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = cmf0->createStatement();
		res = stmt->executeQuery("SELECT nome FROM modofalha");
		while (res->next()) {
			nomes.push_front(res->getString("nome"));
		}
	}
	catch (sql::SQLException &e) {

	}

	//delete res;
	//delete stmt;
}