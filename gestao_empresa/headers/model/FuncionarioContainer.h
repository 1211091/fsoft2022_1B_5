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
    list<Funcionario>::iterator procurarFuncionario(int &numerofuncionario);
public:
    list<Funcionario> getAll();
    Funcionario* get(int numerofuncionario);
    void adicionarFuncionario(const Funcionario &obj);
    void eliminarFuncionario(int numerofuncionario);
    void atualizarFuncionario(string& nomeFuncionario, string& funcao, int numerofuncionario);
};
#endif //HEADERS_MODEL_FUNCIONARIOCONTAINER_H