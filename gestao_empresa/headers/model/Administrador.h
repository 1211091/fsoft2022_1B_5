//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_ADMINISTRADOR_H
#define HEADERS_MODEL_ADMINISTRADOR_H


#include <string>
using namespace std;
#include "Nome.h"
#include "Funcionario.h"
#include "Produtos.h"
class Administrador: public Nome{
private:
    string nome;

public:
    Administrador(const string& Nome);
    void adicionarFuncionario( Funcionario);
    void removerFuncionario(Funcionario);
    void adicionarProdutos(Produtos);
    void removerProdutos(Produtos);
    const string get(Funcionario);
    int getQuantidade();



};

#endif HEADERS_MODEL_ADMINISTRADOR_H

#include <string>
using namespace std;
#include "Nome.h"
#include "Funcionario.h"
#include "Produtos.h"
class Administrador: public Nome{
    private:
    string nome;

    public:
    Administrador(const string& Nome);
    void adicionarFuncionario( Funcionario);
    void removerFuncionario(Funcionario);
    void adicionarProdutos(Produtos);
    void removerProdutos(Produtos);
    const string get(Funcionario);
    int getQuantidade();



};
