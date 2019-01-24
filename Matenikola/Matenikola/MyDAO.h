#pragma once
#include "mysql_connection.h"
using namespace std;
class MyDAO
{
private :
	sql::Driver * driver;
	sql::Connection * conn;
	string url;
	string user;
	string pass;
	string database;	
	static MyDAO * instance;
	MyDAO();
public:
	static MyDAO*  getInstance();
	sql::Connection* getConnection(); 
	
	virtual ~MyDAO();
};

