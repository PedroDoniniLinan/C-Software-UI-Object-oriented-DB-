#ifndef ATENDIMENTO_H
#define ATENDIMENTO_H

#pragma once

#include <string>

using namespace std;

class ModoFalha;
class Motor;
class Usuario;

class Atendimento
{
    private:
		string numeroProtocolo;
		string onus;
		string prioridade;
		string descricaoConserto;
        string dataEntrada;
        string dataDespacho;
        string dataConserto;
        ModoFalha * modoFalha;
        Motor * motor;
		Motor * motorSub;
        Usuario * usuario;

    public:
        Atendimento(string numeroProtocolo); 
        ~Atendimento();

		string getProtocolo();
		string getOnus();
		string getPrioridade();
		string getDescricaoConserto();
		string getEntrada();
		string getDespacho();
		string getConserto();
		ModoFalha* getFalha();
		Motor* getMotor();
		Motor* getMotorSub();
		Usuario* getMecanico();

		void cadastrarEntrada(string protocolo, string prioridade, string dataEntrada, Motor * motor);
		void cadastrarConserto(string descricao, string onus, string dataConserto, Usuario * mecanico, ModoFalha * falha);
		void substituir(Motor * sub);
		void despachar(string dataDespacho);
};  //end class Atendimento



#endif
