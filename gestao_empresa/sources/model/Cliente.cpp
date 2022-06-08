//
// Created by luis_ on 06/06/2022.
//
#include "Cliente.h"

int cliente::numero=0;
Cliente::ClienteC(const string& nomeLoja,const string& nomeGerente ){
  this->nomeLoja =nomeLoja;
  this->nomeGerente=nomeGerente;
  this numero=numero++;
}
Cliente::~Cliente(){
}
const Cliente::getGerente(){
    return nomeGerente;
}
const Cliente::getNomeLoja(){
    return NomeLoja;
}