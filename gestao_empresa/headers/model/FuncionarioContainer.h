//
// Created by babis on 6/9/2022.
//

#ifndef MAIN_CPP_FUNCIONARIOCONTAINER_H
#define MAIN_CPP_FUNCIONARIOCONTAINER_H
#include "Nome.h"
#include "Administrador.h"
#include "Funcionario.h"
#include "Produto.h"
#include "Cliente.h"
#include <list>

class FuncionarioContainer{
private:
    list<Funcionario> funcionarios;
    vector<Funcionario> produtos;
    FuncionarioContainer *funcionario;
public:
    list<Stock> getAll();
    void adicionarFuncionario(Funcionario);
    void eliminarFuncionario(Funcionario);


};
#endif //MAIN_CPP_FUNCIONARIOCONTAINER_H
