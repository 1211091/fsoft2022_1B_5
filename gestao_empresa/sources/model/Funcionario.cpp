//
// Created by bilax on 06/06/2022.
//
#include "Nome.h"
#include "Funcionario.h"
#include "InformacaoInvalidaException.h"
#include <iostream>
int Funcionario::Numero=1;
Funcionario::Funcionario(const string &nomeFuncionario,const string &funcao){
   setFuncionario(funcionario);
    this->numerofuncionario = Numero++;
}
bool Funcionario::FuncaoValida(const string& funcao){
    if(funcao.length() < 3){
        cout<<"A funcao tem de ter no minimo 3 caracteres."<<endl;
        return false;
    }
    return true;
}

bool Funcionario::NomeValido(const string& nomeFuncionario){
    if(nomeFuncionario.length() < 2){
        cout<<"O nome tem de ter no minimo 2 caracteres."<<endl;
        return false;
    }
    return true;
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
  //this->funcao = funcao;
    if(FuncaoValida(funcao)){
        this->funcao = funcao;
    }else{
        string msg = "Funcionario: " + funcao;
        throw InformacaoInvalidaException(msg);
    }
}
string Funcionario::getFuncao(){
    return funcao;
}

void Funcionario::setNomeFuncionario(const string &nomeFuncionario){
    //this->nomeFuncionario = nomeFuncionario;
    if(NomeValido(nomeFuncionario)    ){
        this->nomeFuncionario = nomeFuncionario;
    }else{
        string msg = "Funcionario: " + nomeFuncionario;
        throw InformacaoInvalidaException(msg);
    }
}



string Funcionario::getNomeFuncionario() const{
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

int Funcionario::getNumeroFuncionario() const {
    return numerofuncionario;
}
