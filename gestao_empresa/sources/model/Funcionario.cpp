//
// Created by bilax on 06/06/2022.
//
#include "Nome.h"
#include "Funcionario.h"
int Funcionario::Numero=1;
Funcionario::Funcionario(const string &nomeFuncionario,const string &funcao){
   setFuncionario(funcionario);
    this->numerofuncionario = Numero++;
}

Funcionario::Funcionario(const Funcionario& funcionario) {
    this->nomeFuncionario = funcionario.nomeFuncionario;
    this->funcao = funcionario.funcao;
    this->numerofuncionario = funcionario.numerofuncionario;
}
string Funcionario::setFuncionario(const string&funcionario){
    return this->funcionario;
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
    if(this->nomeFuncionario == obj.nomeFuncionario || this->numerofuncionario == obj.numerofuncionario){
        return true;
 }
    return false;
}

bool Funcionario::operator == (int numf) const{
    if(this->numerofuncionario == numf){
        return true;
    }
    return false;
}

int Funcionario::getNumeroFuncionario() {
    return numerofuncionario;
}
