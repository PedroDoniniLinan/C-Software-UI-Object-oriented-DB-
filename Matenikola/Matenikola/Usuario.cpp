#include "Usuario.h"

Usuario::Usuario(string cpf, string permissao) :PessoaFisica(cpf), ativo("1"), permissao(permissao)
{

}

Usuario::~Usuario() 
{

}
