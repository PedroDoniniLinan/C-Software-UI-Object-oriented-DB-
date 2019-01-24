#include "Motor.h"

Motor::Motor(string numeroSerie):numeroSerie(numeroSerie)
{
    
}

Motor::~Motor() 
{
    
}


string Motor::getNumeroSerie() 
{
    
    return numeroSerie;
}

string Motor::getEstado() 
{
    return estado;
}

string Motor::getModelo()
{
	return modelo;
}

string Motor::getDataDesativacao()
{
    return dataDesativacao;
}

string Motor::getNovo()
{
	return novo;
}

PessoaFisica* Motor::getPF() 
{
	return pessoaFisica;
}

PessoaJuridica* Motor::getPJ() 
{
	return pessoaJuridica;
}

/*
void Motor::cadastrarMotor(string modelo, Atendimento atendimento, PessoaFisica* pessoaFisica, PessoaJuridica* pessoaJuridica)
{
	this->modelo = modelo;
	this->listaAtendimentos.push_front(atendimento);
	this->pessoaFisica = pessoaFisica;
	this->pessoaJuridica = pessoaJuridica;
	novo = "0";
}*/

void Motor::cadastrarMotor(string modelo, PessoaFisica* pessoaFisica, PessoaJuridica* pessoaJuridica)
{
	this->modelo = modelo;
	this->pessoaFisica = pessoaFisica;
	this->pessoaJuridica = pessoaJuridica;
	novo = "0";
}

void Motor::setEstado(string estado)
{
	this->estado = estado;
	return;
}

void Motor::setNovo(string novo)
{
	this->novo = novo;
	return;
}