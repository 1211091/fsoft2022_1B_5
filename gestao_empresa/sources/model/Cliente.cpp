//
// Created by luis_ on 06/06/2022.
//
#include "Nome.h"
#include "Cliente.h"
#include "InformacaoInvalidaException.h"
#include <iostream>

int Cliente::Numero=1;
Cliente::Cliente(const string& nomeLoja){
  this->nomeLoja = nomeLoja;
  this->numerocliente = Numero++;
}
Cliente::~Cliente(){
}

string Cliente::getNomeLoja() {
    return nomeLoja;
}

void Cliente::setNomeLoja(const string &nomeLoja){
    if(NomeValido(nomeLoja)){
        this->nomeLoja = nomeLoja;
    }else{
        string msg = "Cliente: " +nomeLoja;
        throw InformacaoInvalidaException(msg);
    }
}

Cliente::Cliente(const Cliente &cliente) {
    this->nomeLoja = cliente.nomeLoja;
    this->numerocliente = cliente.numerocliente;
}
int Cliente::getNumeroCliente(){
    return numerocliente;
}
bool Cliente::operator == (const Cliente& obj) const{
    if(this->numerocliente == obj.numerocliente){
        return true;
    }
    return false;
}

bool Cliente::operator == (int nc) const{
    if(this->numerocliente == nc){
        return true;
    }
    return false;
}

bool Cliente::NomeValido(const string &nomeLoja) {
    if(nomeLoja.length() < 2){
        cout<<"O nome tem de ter no minimo 2 caracteres."<<endl;
        return false;
    }
    return true;
}

