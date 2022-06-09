//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_CLIENTE_H
#define HEADERS_MODEL_CLIENTE_H
#include "Nome.h"
#include <string>

class Cliente: public Nome{
protected:
    string nome;
    string nomeLoja;
public:
        Cliente(const string& nomeGerente,const string& nomeLoja);
        ~Cliente();
        bool operator == (const Cliente& produto) const;
        bool operator == (string tp) const;
        Cliente* getCliente(const Cliente& nomeLoja);

};

#endif //HEADERS_MODEL_CLIENTE_H
