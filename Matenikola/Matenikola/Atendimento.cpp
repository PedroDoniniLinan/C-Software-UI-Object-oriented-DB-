#include "Atendimento.h"

Atendimento::Atendimento(string numeroProtocolo):numeroProtocolo(numeroProtocolo)
{
    
}

Atendimento::~Atendimento() 
{
    
}

string Atendimento::getProtocolo() {
	return numeroProtocolo;
}

string Atendimento::getOnus() {
	return onus;
}

string Atendimento::getPrioridade() {
	return prioridade;
}

string Atendimento::getDescricaoConserto() {
	return descricaoConserto;
}

string Atendimento::getEntrada() {
	return dataEntrada;
}

string Atendimento::getDespacho() {
	return dataDespacho;
}

string Atendimento::getConserto() {
	return dataConserto;
}

ModoFalha* Atendimento::getFalha() {
	return modoFalha;
}

Motor* Atendimento::getMotor() {
	return motor;
}

Motor* Atendimento::getMotorSub() {
	return motorSub;
}

Usuario* Atendimento::getMecanico() {
	return usuario;
}


void Atendimento::cadastrarEntrada(string protocolo, string prioridade, string dataEntrada, Motor * motor) {
	this->numeroProtocolo = protocolo;
	this->prioridade = prioridade;
	this->dataEntrada = dataEntrada;
	this->motor = motor;
	return;
}

void Atendimento::cadastrarConserto(string descricao, string onus, string dataConserto, Usuario * mecanico, ModoFalha * falha) {
	this->descricaoConserto = descricao;
	this->onus = onus;
	this->dataConserto = dataConserto;
	this->usuario = mecanico;
	this->modoFalha = falha;
	return;
}

void Atendimento::substituir(Motor * sub) {
	this->motorSub = sub;
	return;
}

void Atendimento::despachar(string dataDespacho) {
	this->dataDespacho = dataDespacho;
	return;
}