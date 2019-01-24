#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include <list>
#include "Motor.h"

class Endereco;

using namespace std;


class PessoaJuridica
{
    private:
		string cnpj;
        string nome;
		string telefone;
        string email;
        Endereco * endereco;
		list<Motor> listaMotores;

    public:
        PessoaJuridica(string cnpj);
        ~PessoaJuridica(); 

		string getCNPJ();
		string getTelefone();
		string getNome();
		string getEmail();
		Endereco* getEndereco();

		void cadastrarPJ(string telefone, string nome, string email, Endereco* endereco);
		void inserirMotor(Motor motor);
};  //end class PessoaJuridica



#endif
