//
// Created by bilax on 01/06/2022.
//

#ifndef MAIN_CPP_CLIENTE_H
#define MAIN_CPP_CLIENTE_H
#include "Nome.h"
#include <string>

class Cliente: public Nome{
    private:
    string nome;
    public:
        Cliente(const string& nomeGerente,const string& nomeLoja);
        ~Cliente();



};

#endif //MAIN_CPP_CLIENTE_H
