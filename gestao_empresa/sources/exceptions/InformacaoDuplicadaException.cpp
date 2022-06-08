//
// Created by luis_ on 01/06/2022.
//

#include "InformacaoDuplicadaException.h"

InformacaoDuplicadaException::InformacaoDuplicadaException(string informacao) {
    this->informacao = "Erro: [" + informacao +"] duplicada!";
}

const char* InformacaoDuplicadaException::what(){
    return this-> informacao.c_str();
}