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
    list<Administrador> administradores;
    list<Administrador>::iterator procura(string nome);
    int quantidade;
public:
    void adicionarProdutos(Produto);
    void eliminarProdutos(Produto);
    string get(Funcionario);
    int getQuantidade();
};

#endif //HEADERS_MODEL_ADMINISTRADORCONTAINER_H
