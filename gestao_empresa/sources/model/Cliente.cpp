//
// Created by luis_ on 06/06/2022.
//
#include "Nome.h"
#include "Cliente.h"
int Cliente::Numero=1;
Cliente::Cliente(const string& nomeLoja){
  setCliente(cliente);
  this->numerocliente = Numero++;
}
Cliente::~Cliente(){
}

string Cliente::getNomeLoja() {
    return nomeLoja;
}
string Cliente::setCliente(const string&cliente){
    return this->cliente;
}
void Cliente::setNomeLoja(string &nomeLoja){
    this-> nomeLoja = nomeLoja;
}

Cliente::Cliente(const Cliente &cliente) {
    this->nomeLoja = cliente.nomeLoja;
    this->numerocliente = cliente.numerocliente;
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
int Cliente::getNumeroCliente(){
    return numerocliente;
}