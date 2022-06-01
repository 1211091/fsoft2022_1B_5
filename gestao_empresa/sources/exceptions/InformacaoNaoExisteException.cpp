//
// Created by luis_ on 31/05/2022.
//

#include "InformacaoNaoExisteException.h"

InformacaoNaoExisteException::InformacaoNaoExisteException(string informacao) {
    this->informacao = "Erro: [" + informacao + "] Nao existe!";
}

const char* InformacaoNaoExisteException::what(){
    return this -> informacao.c_str();
}