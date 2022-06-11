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

string Cliente::getCliente() {
    return nomeLoja;
}

void Cliente::setCliente(string &nomeLoja){
    this-> nomeLoja = nomeLoja;
}

