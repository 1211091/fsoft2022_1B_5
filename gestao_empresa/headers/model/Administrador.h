//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_ADMINISTRADOR_H
#define HEADERS_MODEL_ADMINISTRADOR_H

#include <string>
#include "Nome.h"
#include "FuncionarioContainer.h"
#include "ProdutoContainer.h"
#include "ClienteContainer.h"
#include "StockContainer.h"
#include "Funcionario.h"
using namespace std;


class Administrador: public Nome{
private:
    string nome;
    bool ValidacaoNome(const string& nome);
    ClienteContainer clientes;
    ProdutoContainer produtos;
    StockContainer stock;
    FuncionarioContainer funcionarios;

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

    ClienteContainer & getClienteContainer();
    ProdutoContainer & getProdutoContainer();
    StockContainer & getStockContainer();
    FuncionarioContainer & getFuncionarioContainer();
};

#endif HEADERS_MODEL_ADMINISTRADOR_H

