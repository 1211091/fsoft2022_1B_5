//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_CLIENTE_H
#define HEADERS_MODEL_CLIENTE_H
#include "Nome.h"
#include <string>

class Cliente{
    private:
    string nomeLoja;
    public:
        Cliente(const string& nomeLoja);
        ~Cliente();
        string getCliente();
        void setCliente(string &nomeLoja);
        bool operator == (const Cliente& NomeLoja) const;
        bool operator == (Cliente* nl) const;



};

#endif //HEADERS_MODEL_CLIENTE_H
