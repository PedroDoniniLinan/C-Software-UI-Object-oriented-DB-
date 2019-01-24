#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>
#pragma once

//#include <list>
using namespace std;

class Endereco
{
    private:
		string cep;
        string logradouro;
        string complemento;
        //list<PessoaJuridica> listaPessoaJuridica;
        //list<PessoaFisica> listaPessoaFisica;

    public:
        Endereco(string cep, string logradouro, string complemento);
        ~Endereco(); 

		string getCEP();
		string getLogradouro();
		string getComplemento();
        Endereco* getEndereco(); 
};  //end class Endereco



#endif
