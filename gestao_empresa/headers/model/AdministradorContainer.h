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
public:
    void adicionarFuncionario(Funcionario);
    void removerFuncionario(Funcionario);
    void adicionarProdutos(Produto);
    void removerProdutos(Produto);
    const string get(Funcionario);
    int getQuantidade();
    void adicionarCliente(Cliente);
    void removerCliente(Cliente);
};

#endif //HEADERS_MODEL_ADMINISTRADORCONTAINER_H
