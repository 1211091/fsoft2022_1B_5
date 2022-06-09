//
// Created by bilax on 06/06/2022.
//
#include "Nome.h"
#include "Funcionario.h"
#include "FuncionarioContainer.h"


Funcionario::Funcionario(const string &nomefuncionario,const string &funcao){
        setFuncao(funcao);
        setNomeFuncionario(nomefuncionario);
}
void setFuncao(const string &funcao){

}

const string Funcionario::getFuncao(){
    return this->funcao;
}
Funcionario* FuncionarioContainer::getFuncionario(const Funcionario& nomeFuncionario){
    list<Funcionario>::iterator it = procurarFuncionario((string &) nomeFuncionario);
    if(it != this->funcionarios.end()){
        return &(*it);
    }
    return NULL;
}
