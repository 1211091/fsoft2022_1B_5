//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_ADMINISTRADORCONTAINER_H
#define HEADERS_MODEL_ADMINISTRADORCONTAINER_H
#include "Nome.h"
#include "Administrador.h"
#include "Funcionario.h"
#include "Produto.h"
#include "Cliente.h"
#include "Stock.h"
#include <list>

class AdministradorContainer{
private:
    int quantidade;

public:
    string administrador;
    string produtos;
    int stock;
    string cliente;
    //Funcionario Funcionario;
    //Funcionario* getFuncionario();
    ClienteContainer & getClienteContainer();
    ProdutoContainer & getProdutoContainer();
    StockContainer & getStockContainer();
    FuncionarioContainer & getFuncionarioContainer();
};

#endif //HEADERS_MODEL_ADMINISTRADORCONTAINER_H
