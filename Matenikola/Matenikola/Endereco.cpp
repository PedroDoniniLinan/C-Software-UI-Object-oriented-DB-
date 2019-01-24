#include "Endereco.h"

Endereco::Endereco(string cep, string logradouro, string complemento):cep(cep),logradouro(logradouro),complemento(complemento)
{

}

Endereco::~Endereco() 
{

}

string Endereco::getCEP()
{

	return cep;
}

string Endereco::getLogradouro()
{

	return logradouro;
}

string Endereco::getComplemento()
{

	return complemento;
}

Endereco* Endereco::getEndereco() 
{

    return this;
}

