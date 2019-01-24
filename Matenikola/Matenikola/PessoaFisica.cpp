#include "PessoaFisica.h"


PessoaFisica::PessoaFisica(string cpf) :cpf(cpf)
{

}

PessoaFisica::~PessoaFisica() 
{

}


string PessoaFisica::getCPF()
{

    return cpf;
}

string PessoaFisica::getTelefone()
{

	return telefone;
}

string PessoaFisica::getNome()
{

	return nome;
}

string PessoaFisica::getEmail()
{

	return email;
}

Endereco* PessoaFisica::getEndereco()
{

	return endereco;
}


void PessoaFisica::cadastrarPF(string telefone, string nome, string email, Endereco* endereco)
{
	this->telefone = telefone;
	this->nome = nome;
	this->email = email;
	this->endereco = endereco;
	return;
}

void PessoaFisica::inserirMotor(Motor motor)
{
	listaMotores.push_front(motor);
	return;
}