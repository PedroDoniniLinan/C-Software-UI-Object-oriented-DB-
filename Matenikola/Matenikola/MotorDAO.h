#pragma once
#ifndef MotorDAO_H
#define MotorDAO_H

#include <iostream>
#include <vector>
#include "motor.h"
#include <sstream>
#include "MyDAO.h"
#include <list>

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

using namespace std;


class MotorDAO
{


public:

	
	MotorDAO();



	
	~MotorDAO();
	
	Motor * motorExiste(string numeroSerie);

	list<string> modelos;
	
	void cadastrarMotor(Motor * mot);
	void atualizaEstado(Motor * mot);
	void consultaModelos();

};  //end class MotorDAO



#endif