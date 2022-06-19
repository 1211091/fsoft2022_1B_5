//
// Created by bilax on 06/06/2022.
//
#include "Nome.h"
#include "Funcionario.h"
#include "InformacaoInvalidaException.h"
#include <iostream>
int Funcionario::Numero=1;
Funcionario::Funcionario(const string &nomeFuncionario,const string &funcao){
    this->funcao = funcao;
    this->nomeFuncionario = nomeFuncionario;
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
bool Funcionario::NumeroFuncionarioValido(const int &numerofuncionario) {
    if(numerofuncionario < 1){
        cout<<"O funcionario com o numero "<<numerofuncionario<<" nao existe."<<endl;
        return false;
    }
    return true;
}


Funcionario::Funcionario(const Funcionario& funcionario) {
    this->nomeFuncionario = funcionario.nomeFuncionario;
    this->funcao = funcionario.funcao;
    this->numerofuncionario = funcionario.numerofuncionario;
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
    if(NomeValido(nomeFuncionario)){
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
    if(this->numerofuncionario == obj.numerofuncionario){
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

void Funcionario::setNumeroFuncionario(const int &numerofuncionario) {
    if(NumeroFuncionarioValido(numerofuncionario)){
        this->numerofuncionario = numerofuncionario;
    }else{
        string msg = "Funcionario: " + numerofuncionario;
        throw InformacaoInvalidaException(msg);
    }
}



