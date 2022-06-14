//
// Created by babis on 6/9/2022.
//

#ifndef HEADERS_MODEL_FUNCIONARIOCONTAINER_H
#define HEADERS_MODEL_FUNCIONARIOCONTAINER_H
#include "Nome.h"
#include "Funcionario.h"
#include "Produto.h"
#include "Cliente.h"
#include <list>

class FuncionarioContainer{
private:
    list<Funcionario> funcionarios;
    list<Funcionario>::iterator procurarFuncionario(string&nomeFuncionario);
public:
    list<Funcionario> getAll();
    Funcionario* get(string& referencia);
    void adicionarFuncionario(Funcionario nomeFuncionario);
    void eliminarFuncionario(string&nomeFuncionario);
    void atualizarFuncionario( string& nomeFuncionario, string& funcao);
};
#endif //HEADERS_MODEL_FUNCIONARIOCONTAINER_H
