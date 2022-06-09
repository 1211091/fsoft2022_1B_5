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
    FuncionarioContainer *funcionario;
    list<Funcionario>::iterator procurarFuncionario(string&nomeFuncionario);
public:
    list<Funcionario> getAll();
    void adicionarFuncionario(Funcionario nomeFuncionario);
    void eliminarFuncionario(string&nomeFuncionario);
    void atualizar(string&nomeFuncionario, string&funcao);
    Funcionario* getFuncionario(const Funcionario& nomeFuncionario);


};
#endif //MAIN_CPP_FUNCIONARIOCONTAINER_H
