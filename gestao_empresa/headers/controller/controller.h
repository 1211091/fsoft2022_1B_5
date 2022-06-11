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
#include "Utils.h"
#include "View.h"
#include "Produto.h"
#include "Administrador.h"
#include "Empresa.h"
class Controller{
private:
    Administrador model;
    View view;
    AdministradorView administradorView;
    FuncionarioView funcionarioView;
    ClienteView clienteView;
    ProdutoView produtoView;
    void runFuncionario();
    void runProduto();
    void runAdministrador();
    void runCliente();
public:
    Controller(Administrador& administrador);
    void run();
};

#endif //HEADERS_CONTROLLER_CONTROLLER_H
