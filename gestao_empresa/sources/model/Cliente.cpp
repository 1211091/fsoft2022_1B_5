//
// Created by luis_ on 06/06/2022.
//
#include "Cliente.h"
#include "ClienteContainer.h"
#include <iostream>

Cliente::Cliente(const string& nomeLoja){
  this->nomeLoja =nomeLoja;
}
Cliente::~Cliente(){
}

string Cliente::getNomeLoja()  {
    return nomeLoja;
}

void Cliente::setNomeLoja(string &nomeLoja){
    this-> nomeLoja = nomeLoja;
}

Cliente::Cliente(const Cliente &cliente) {
    this->nomeLoja = cliente.nomeLoja;
}

