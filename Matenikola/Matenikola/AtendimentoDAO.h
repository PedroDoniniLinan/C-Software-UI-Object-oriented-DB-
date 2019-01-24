#pragma once
#ifndef AtendimentoDAO_H
#define AtendimentoDAO_H

#include <iostream>
#include <vector>
#include "Atendimento.h"
#include <sstream>
#include "MyDAO.h"
#include <list>

#include "Usuario.h"
#include "Motor.h"
#include "ModoFalha.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

using namespace std;




class AtendimentoDAO
{

public:
	AtendimentoDAO();
	~AtendimentoDAO();

	list<string> prot;

	Atendimento * AtendimentoExiste(string numeroProtocolo);

	void cadastrarEntrada(Atendimento * atend);

	void consultar(string modelo, string falha);


};  //end class AtendimentoDAO



#endif