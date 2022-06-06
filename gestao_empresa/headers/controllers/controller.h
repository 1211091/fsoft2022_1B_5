//
// Created by babis on 6/6/2022.
//

#ifndef HEADERS_CONTROLLERS_CONTROLLERS_H
#define HEADERS_CONTROLLERS_CONTROLLERS_H


#include "AdministradorView.h"
#include "Cliente.h"
#include "FuncionarioView.h"
#include "ProdutosView.h.
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
    ProdutosView produtosView;
    StockView stockView;
    void runFuncionario();
    void runProdutos();
    void runAdministrador();
    void runStock();
    void runCliente();
public:
    Controller(Empresa& empresa);
    void run();
};
#endif //HEADERS_CONTROLLERS_CONTROLLERS_H
