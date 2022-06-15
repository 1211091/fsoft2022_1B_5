//
// Created by luis_ on 06/06/2022.
//
#include "Cliente.h"

Cliente::Cliente(const string& nomeLoja){
  this->nomeLoja =nomeLoja;
}
Cliente::~Cliente(){
}

string Cliente::getNomeLoja() {
    return nomeLoja;
}

void Cliente::setNomeLoja(string &nomeLoja){
    this-> nomeLoja = nomeLoja;
}

Cliente::Cliente(const Cliente &cliente) {
    this->nomeLoja = cliente.nomeLoja;
}

bool Cliente::operator == (const Cliente& obj) const{
    if(this->nomeLoja == obj.nomeLoja){
        return true;
    }
    return false;
}

bool Cliente::operator == (string nl) const{
    if(this->nomeLoja == nl){
        return true;
    }
    return false;
}