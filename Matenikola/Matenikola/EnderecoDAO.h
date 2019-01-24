#pragma once
#ifndef EnderecoDAO_H
#define EnderecoDAO_H
//Begin section for file DAO.h
//TODO: Add definitions that you want preserved
//End section for file DAO.h
#include <iostream>
#include <vector>
#include "Endereco.h"
#include <sstream>
#include "MyDAO.h"
using namespace std;



//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class EnderecoDAO
{

	//Begin section for DAO
	//TODO: Add attributes that you want preserved
	//End section for DAO



public:

	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	EnderecoDAO();



	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	~EnderecoDAO();


	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	Endereco * enderecoExiste(string cep, string logradouro, string complemento);


	//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
	void cadastrarEndereco(Endereco * end);


};  //end class EnderecoDAO



#endif
