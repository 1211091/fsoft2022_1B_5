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
    int administrador;
    int produto;
    int Stock;
    int cliente;
    Funcionario Funcionario;
    Funcionario* getFuncionario();
    int getStock();
    int getProduto();
    int getCliente();
    int getAdministrador();
};

#endif //HEADERS_MODEL_ADMINISTRADORCONTAINER_H
