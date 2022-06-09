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
#include <list>

class AdministradorContainer{
private:
    int quantidade;

public:
    int getFuncionario();
    int getStock();
    int getProduto();
    int getCliente();
};

#endif //HEADERS_MODEL_ADMINISTRADORCONTAINER_H
