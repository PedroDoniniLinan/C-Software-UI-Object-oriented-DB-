#include "MyDAO.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

MyDAO* MyDAO::instance = 0;

MyDAO::MyDAO()
{
	//url = "labprog.pcs.usp.br"; //usar esta url para se conectar desde fora do labprog
	url = "server"; // usar esta para se conectar desde dentro do labprog
	
	//usar as credenciais próprias de cada grupo. neste exemplo, estou usando o banco
	//teste
	user = "g2c"; 
	pass = "M8FJ0ijt";
	database = "g2c";

	try {
		/* INSERT TUTORIAL CODE HERE! */
		driver = get_driver_instance();
		conn = driver->connect(url, user, pass);
		conn->setSchema(database);
	}
	catch (sql::SQLException &e) {
		/*
		MySQL Connector/C++ throws three different exceptions:

		- sql::MethodNotImplementedException (derived from sql::SQLException)
		- sql::InvalidArgumentException (derived from sql::SQLException)
		- sql::SQLException (derived from std::runtime_error)
		*/
		cout << "# ERR: SQLException in " << __FILE__;
		cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
		/* what() (derived from std::runtime_error) fetches error message */
		cout << "# ERR: " << e.what();
		cout << " (MySQL error code: " << e.getErrorCode();
		cout << ", SQLState: " << e.getSQLState() << " )" << endl;
				
	}
	cout << "Conectou no BD" << endl;
}

MyDAO* MyDAO::getInstance()
{
	if (instance == 0)
		instance = new MyDAO();
	return instance;
}

sql::Connection * MyDAO::getConnection()
{
	return conn;
}

MyDAO::~MyDAO()
{
}



 
