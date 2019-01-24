#pragma once
#ifndef PJDAO_H
#define PJDAO_H
//Begin section for file DAO.h
//TODO: Add definitions that you want preserved
//End section for file DAO.h
#include <iostream>
#include <vector>
#include <sstream>
#include "PessoaJuridica.h"
#include "MyDAO.h"
#include "Endereco.h"
#include "EnderecoDAO.h"

using namespace std;



//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class PJDAO
{

	//Begin section for DAO
	//TODO: Add attributes that you want preserved
	//End section for DAO



public:

	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	PJDAO();



	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	~PJDAO();


	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	PessoaJuridica * pjExiste(string cnpj);


	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	void cadastrarPJ(PessoaJuridica * pj);

};  //end class DAO



#endif
