#ifndef MODOFALHA_H
#define MODOFALHA_H

#include <string>
/*
class Motor;

class Atendimento;*/

using namespace std;


class ModoFalha
{
    private:
       string nome;
       string descricao;
      // Atendimento * atendimento;

    public:
        ModoFalha(string nome); 
        ~ModoFalha(); 

		string getNome();

};  //end class ModoFalha



#endif
