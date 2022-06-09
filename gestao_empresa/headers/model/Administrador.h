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

    Administrador(const string& Nome);
    Administrador(const Administrador &obj);
    ~Administrador();
    const string &getNome() const;
    void setNome(const string &nome);
    bool operator == (const Administrador& obj) const;
    bool operator == (const string initials) const;
    void adicionar(const Administrador& obj);
};

#endif HEADERS_MODEL_ADMINISTRADOR_H

