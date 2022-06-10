//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_CLIENTE_H
#define HEADERS_MODEL_CLIENTE_H
#include "Nome.h"
#include <string>

class Cliente {
private:
    string nome;
    string nomeLoja;
public:
        Cliente(const string &nomeLoja);
        ~Cliente();
        string NomeLoja(const string& nomeLoja);
        string setNomeLoja(const string &nomeLoja);
        string getNomeLoja();
};

#endif //HEADERS_MODEL_CLIENTE_H
