#ifndef MOTOR_H
#define MOTOR_H

#pragma once

#include <list>
#include <string>
#include "Atendimento.h"

class PessoaFisica;
class PessoaJuridica;

using namespace std;

class Motor
{
    private:
        string numeroSerie;
		string novo;
        string modelo;
		string dataDesativacao;
		string estado;
        //list<Atendimento> listaAtendimentos;
        //Motor * motorNovo;
        //Motor * motorVelho;
        PessoaJuridica * pessoaJuridica;
		PessoaFisica * pessoaFisica;

    public:
        Motor(string numeroSerie); 
        ~Motor(); 

        string getNumeroSerie(); 
        string getEstado(); 
		string getNovo();
        string getModelo();
		string getDataDesativacao();
		PessoaFisica * getPF();
		PessoaJuridica * getPJ();

		//void cadastrarMotor(string modelo, Atendimento atendimento, PessoaFisica* pessoaFisica, PessoaJuridica* pessoaJuridica);
		void cadastrarMotor(string modelo, PessoaFisica* pessoaFisica, PessoaJuridica* pessoaJuridica);
		void setNovo(string novo);
		void setEstado(string estado);
};  //end class Motor



#endif
