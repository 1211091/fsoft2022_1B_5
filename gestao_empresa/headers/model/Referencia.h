//
// Created by babis on 6/8/2022.
//

#ifndef HEADERS_MODEL_REFERENCIA_H
#define HEADERS_MODEL_REFERENCIA_H

#include <string>
#include "AdministradorContainer.h"
#include "ClienteContainer.h"
#include "ProdutoContainer.h"

using namespace std;

class Referencia{
private :
    int referencia;

    void setInformacaoNaoExisteException();
public:
    Referencia();
    Referencia(const int& referencia);
    const int getReferencia();
    void setReferencia(const int &referencia);

    void setNumero(const Referencia &numero) ;
};

#endif //HEADERS_MODEL_REFERENCIA_H
