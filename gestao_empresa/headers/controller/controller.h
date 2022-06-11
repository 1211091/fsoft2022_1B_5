//
// Created by babis on 6/6/2022.
//

#ifndef HEADERS_CONTROLLER_CONTROLLER_H
#define HEADERS_CONTROLLER_CONTROLLER_H

#include "Empresa.h"
#include "ClienteView.h"
#include "FuncionarioView.h"
#include "ProdutoView.h."
#include "Utils.h"
#include "View.h"
#include "Produto.h"
#include "Empresa.h"
class Controller{
private:
    Empresa model;
    View view;
    FuncionarioView funcionarioView;
    ClienteView clienteView;
    ProdutoView produtoView;
    void runFuncionario();
    void runProduto();
    void runCliente();
public:
    Controller(Empresa& empresa);
    void run();
};

#endif //HEADERS_CONTROLLER_CONTROLLER_H
