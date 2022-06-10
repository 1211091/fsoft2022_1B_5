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
    int administrador;
    Administrador();
    Administrador(const string& Nome);
    Administrador(const Administrador &obj);
    ~Administrador();
    const string &getNome() const;
    void setNomeAdministrador(const string &nome);
    int getAdministrador();
    bool operator == (const Administrador& obj) const;
    bool operator == (const string nome) const;

    Cliente & getCliente();
    Produto & getProduto();
    Stock & getStock();
    Funcionario & getFuncionario();
};

#endif HEADERS_MODEL_ADMINISTRADOR_H

