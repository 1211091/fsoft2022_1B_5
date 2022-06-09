//
// Created by bilax on 06/06/2022.
//
#include "Nome.h"
#include "Funcionario.h"
#include "FuncionarioContainer.h"


Funcionario::Funcionario(const string& funcao);{
        setFuncao(funcao);
}
Funcionario::Nome(const string& nome){
    setNome(nome);
}
Funcionario::~Funcionario{
};
void setFuncao(const string &funcao){
    
}
const string getFuncao(){
    return this->funcao;
}
Funcionario* FuncionarioContainer::getFuncionario(const Funcionario& nomeFuncionario){
    list<Funcionario>::iterator it = procurarFuncionario(nomeFuncionario);
    if(it != this->funcionarios.end()){
        return &(*it);
    }
    return NULL;
}
