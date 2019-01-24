#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#pragma once

#include <list>
#include "Motor.h"

class Endereco;

using namespace std;

class PessoaFisica
{
    private:
        string cpf;
		string telefone;
		string nome;
        string email;
        Endereco * endereco;
        list<Motor> listaMotores;

    public:
        PessoaFisica(string cpf);
        ~PessoaFisica(); 

        string getCPF(); 
		string getTelefone();
		string getNome();
		string getEmail();
		Endereco* getEndereco();

        void cadastrarPF(string telefone, string nome, string email, Endereco* endereco);
		void inserirMotor(Motor motor);
};  //end class PessoaFisica



#endif
