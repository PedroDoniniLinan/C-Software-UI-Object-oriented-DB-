#include "EnderecoDAO.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
//Begin section for file EnderecoDAO.cpp
//TODO: Add definitions that you want preserved
//End section for file EnderecoDAO.cpp


//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
EnderecoDAO::EnderecoDAO()
{
	//TODO Auto-generated method stub
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
EnderecoDAO::~EnderecoDAO()
{
	//TODO Auto-generated method stub
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
Endereco * EnderecoDAO::enderecoExiste(string cep, string logradouro, string complemento)
{
	Endereco * end = nullptr;
	try {
		sql::Connection * cend0 = MyDAO::getInstance()->getConnection();
		sql::Statement *stmt;
		sql::ResultSet *res;
		stmt = cend0->createStatement();
		res = stmt->executeQuery("SELECT cep, logradouro, complemento from endereco where cep  = " + cep + " AND logradouro = '" + logradouro + "' AND complemento = '" + complemento+"'");

		while (res->next()) {
			end = new Endereco(res->getString("cep"), res->getString("logradouro"), res->getString("complemento"));
		}
		delete res;
		delete stmt;
		//cend0->close();
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
	return end;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
void EnderecoDAO::cadastrarEndereco(Endereco *end)
{
	try {
		sql::Connection * cend1 = MyDAO::getInstance()->getConnection();
		sql::Statement *stmt;
		stmt = cend1->createStatement();
		string cep = end->getCEP();
		string logradouro = end->getLogradouro();
		string complemento = end->getComplemento();
		stmt->execute("INSERT INTO endereco (cep, logradouro, complemento) VALUES ('" + cep + "','" + logradouro + "','" + complemento + "')");
		//cend1->close();
	}
	catch (sql::SQLException &e) {

	}
	return;
}