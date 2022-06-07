//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_ADMINISTRADOR_H
#define HEADERS_MODEL_ADMINISTRADOR_H

#include <stdio>
#include <string>
#include "Nome.h"
#include "Funcionario.h"
#include "Produto.h"
#include "Cliente.h"
using namespace std;
class Administrador: public Nome{
private:
    string nome;

public:
    Administrador(const string& Nome);
    ~Administrador();
    void setNome();
    string getNome(nome);


};

#endif HEADERS_MODEL_ADMINISTRADOR_H

