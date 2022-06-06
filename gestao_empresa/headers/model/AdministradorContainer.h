//
// Created by bilax on 01/06/2022.
//

#ifndef LASTTEST_LOG_ADMINISTRADOR_H
#define LASTTEST_LOG_ADMINISTRADOR_H
#include "Nome.h"
#include "Administrador.h"
#include <list>

class AdministradorContainer{
private:
    list<Administrador> administradores;
    list<Administrador>::iterator procura(string nome);
public:
    void adicionarFuncionario( Funcionario);
    void removerFuncionario(Funcionario);
    void adicionarProdutos(Produtos);
    void removerProdutos(Produtos);
    const string get(Funcionario);
    int getQuantidade();
    void adicionarCliente(Cliente);
    void removerCliente(Cliente);
};

#endif //LASTTEST_LOG_ADMINISTRADOR_H
