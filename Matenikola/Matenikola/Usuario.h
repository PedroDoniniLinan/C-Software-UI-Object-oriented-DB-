#ifndef USUARIO_H
#define USUARIO_H

#pragma once

#include "PessoaFisica.h"

//class Atendimento;

class Usuario : public PessoaFisica
{
    private:    
        string login;
        string senha;
        string ativo;
        string permissao;
		//Atendimento * atendimento;
    public:
        Usuario(string cpf, string permissao);
        ~Usuario(); 
/*      void createUsuario(); 
        void usuarioExiste(); 
        void sim(); 
        void getSenha(); 
        void não(); 
        void getNomeECpf(); */
};  //end class Usuario



#endif
