#pragma once
#ifndef ModoFalhaDAO_H
#define ModoFalhaDAO_H

#include <iostream>
#include <vector>
#include "ModoFalha.h"
#include <sstream>
#include "MyDAO.h"
#include <list>

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

using namespace std;

class ModoFalhaDAO {
public:
	ModoFalhaDAO();
	~ModoFalhaDAO();
	list<string> nomes;
	void consultarModosFalha();
};
	



#endif