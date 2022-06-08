//
// Created by luis_ on 01/06/2022.
//

#include "InformacaoInvalidaException.h"

InformacaoInvalidaException::InformacaoInvalidaException(string informacao) {
    this->informacao = informacao;
}

const char* InformacaoInvalidaException::what() {
    string msg = " Erro: ["+ informacao + "] invalida!";
    return msg.c_str();

}