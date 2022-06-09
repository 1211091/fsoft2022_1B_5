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
<<<<<<< HEAD

    Administrador(const string& Nome);
    Administrador(const Administrador &obj);
=======
    Administrador(const string& nome);
    Administrador(const Administrador& obj);
>>>>>>> 37afafc7e15f9cbfd38cae54bf680d22315972ee
    ~Administrador();
    const string &getNome() const;
    void setNome(const string &nome);
    bool operator == (const Administrador& obj) const;
    bool operator == (const string nome) const;
};

#endif HEADERS_MODEL_ADMINISTRADOR_H

