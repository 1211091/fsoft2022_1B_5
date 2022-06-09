//
// Created by bilax on 06/06/2022.
//
#include "Nome.h"
#include "Funcionario.h"


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
