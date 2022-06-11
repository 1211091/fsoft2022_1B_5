//
// Created by bilax on 06/06/2022.
//
#include "Nome.h"
#include "Funcionario.h"

Funcionario::Funcionario(const string &nomefuncionario,const string &funcao){
    this->setFuncao(funcao);
    this->setNomeFuncionario(nomefuncionario);
}

Funcionario::~Funcionario(){
}
void Funcionario::setFuncao(const string &funcao) {
  this->funcao;
}
string Funcionario::getFuncao(){
    return funcao;
}

void Funcionario::setNomeFuncionario(const string &nomeFuncionario){
    this->nomeFuncionario;
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
