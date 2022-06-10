//
// Created by bilax on 06/06/2022.
//
#include "Nome.h"
#include "Funcionario.h"


Funcionario::Funcionario(const string& funcao);{
    this->setFuncao(funcao);
}
Funcionario::Nome(const string& nome){
    this-> setNomeFuncionario(nomeFuncionario);
}
Funcionario::Funcionario(const Funcionario &obj){
 this->setFuncao(obj.funcao);
}
Funcionario::Nome(const Funcionario &obj)

Funcionario::~Funcionario{
};
const Funcionario::getFuncao(){
    return funcao;
}
const Funcionario::getNomeFuncionario(){
    return nomeFuncionario;
}
bool Funcionario::operator ==(const funcao& obj)const{
    if(*(this->funcao)==*(obj.subject)) {
        return true;
    }
    return false;
}

