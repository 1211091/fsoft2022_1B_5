//
// Created by babis on 6/8/2022.
//
#include "Referencia.h"
#include "InformacaoInvalidaException.h"

const string Referencia::getReferencia(){
    return this->referencia;
}

bool Referencia::isReferenciaValid(const string &referencia){
    if(referencia.length() != 10){
        return false;
    }
    return true;
}
void Referencia::setReferencia(const string &referencia){

        if(isReferenciaValid(referencia)){
            this->referencia = referencia;
        }
        else{

            string msg = "Produto: " + referencia;
            throw InformacaoInvalidaException(msg);
        }
}

Referencia::Referencia(const string &referencia) {

}

Referencia::Referencia() {

}

void Referencia::setInformacaoNaoExisteException() {

}

