//
// Created by babis on 6/6/2022.
//

#ifndef HEADERS_CONTROLLER_CONTROLLER_H
#define HEADERS_CONTROLLER_CONTROLLER_H

#include "Empresa.h"
#include "AdministradorView.h"
#include "ClienteView.h"
#include "FuncionarioView.h"
#include "ProdutoView.h."
#include "StockView.h"
#include "Utils.h"
#include "View.h"

class Controller{
private:
    Empresa model;
    View view;
    AdministradorView administradorView;
    FuncionarioView funcionarioView;
    ClienteView clienteView;
    ProdutoView produtoView;
    StockView stockView;
    void runFuncionario();
    void runProduto();
    void runAdministrador();
    void runStock();
    void runCliente();
public:
    Controller(Empresa& empresa);
    void run();
};

#endif //HEADERS_CONTROLLER_CONTROLLER_H
