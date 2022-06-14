//
// Created by bilax on 06/06/2022.
//
#include "Nome.h"
#include "Funcionario.h"

Funcionario::Funcionario(const string &nomeFuncionario,const string &funcao){
    this->nomeFuncionario = nomeFuncionario;
    this->funcao = funcao;
}

Funcionario::Funcionario(const Funcionario& funcionario) {
    this->nomeFuncionario = funcionario.nomeFuncionario;
    this->funcao = funcionario.funcao;
}

Funcionario::~Funcionario(){
}
void Funcionario::setFuncao(const string &funcao) {
  this->funcao = funcao;
}
string Funcionario::getFuncao(){
    return funcao;
}

void Funcionario::setNomeFuncionario(const string &nomeFuncionario){
    this->nomeFuncionario = nomeFuncionario;
}

string Funcionario::getNomeFuncionario(){
    return nomeFuncionario;
}


bool Funcionario::operator == (const Funcionario& obj) const{
    if(this->nomeFuncionario == obj.nomeFuncionario){
        return true;
    }
    return false;
}
bool Funcionario::operator == (string nf) const{
    if(this->nomeFuncionario == nf){
        return true;
    }
    return false;
}

