//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_ADMINISTRADOR_H
#define HEADERS_MODEL_ADMINISTRADOR_H

#include <string>
#include "Nome.h"
#include "Funcionario.h"
#include "Produto.h"
#include "Cliente.h"
using namespace std;
class Administrador: public Nome{
private:
    string nome;
    bool ValidacaoNome(const string& nome);

public:
    Administrador(const string& nome);
    Administrador(const Administrador& obj);
    ~Administrador();
    void setNome(const string &nome);
    const string &getNome() const;
    bool operator == (const Administrador& obj) const;
    bool operator == (const string nome) const;
};

#endif HEADERS_MODEL_ADMINISTRADOR_H

