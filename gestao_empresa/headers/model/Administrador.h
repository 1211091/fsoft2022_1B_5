//
// Created by bilax on 01/06/2022.
//

#ifndef LASTTEST_LOG_ADMINISTRADOR_H
#define LASTTEST_LOG_ADMINISTRADOR_H

#endif //LASTTEST_LOG_ADMINISTRADOR_H

#include <string>
using namespace std;
#include "Nome.h"
#include "Funcionario.h"
#include "Produtos.h"
#include "Cliente.h"
class Administrador: public Nome{
    private:
    string nome;

    public:
    Administrador(const string& Nome);
    ~Administrador();
    void setNome();
    string getNome(nome);


};
