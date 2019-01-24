#pragma once
#ifndef PFDAO_H
#define PFDAO_H
//Begin section for file DAO.h
//TODO: Add definitions that you want preserved
//End section for file DAO.h
#include <iostream>
#include <vector>
#include <sstream>
#include "PessoaFisica.h"
#include "MyDAO.h"
#include "Endereco.h"
#include "EnderecoDAO.h"

using namespace std;



//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class PFDAO
{

	//Begin section for DAO
	//TODO: Add attributes that you want preserved
	//End section for DAO



public:

	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	PFDAO();



	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	~PFDAO();


	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	PessoaFisica* pfExiste(string cpf);

	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	void cadastrarPF(PessoaFisica * pf);


};  //end class PFDAO



#endif
