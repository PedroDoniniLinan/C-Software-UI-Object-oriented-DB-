#include "PessoaJuridica.h"


PessoaJuridica::PessoaJuridica(string cnpj) :cnpj(cnpj)
{

}

PessoaJuridica::~PessoaJuridica()
{

}


string PessoaJuridica::getCNPJ()
{

	return cnpj;
}

string PessoaJuridica::getTelefone()
{

	return telefone;
}

string PessoaJuridica::getNome()
{

	return nome;
}

string PessoaJuridica::getEmail()
{

	return email;
}

Endereco* PessoaJuridica::getEndereco()
{

	return endereco;
}


void PessoaJuridica::cadastrarPJ(string telefone, string nome, string email, Endereco* endereco)
{
	this->telefone = telefone;
	this->nome = nome;
	this->email = email;
	this->endereco = endereco;
	return;
}

void PessoaJuridica::inserirMotor(Motor motor)
{
	listaMotores.push_front(motor);
	return;
}