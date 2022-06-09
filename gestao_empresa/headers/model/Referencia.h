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
    string referencia;
    static bool isReferenciaValid(const string& referencia);
    void setInformacaoNaoExisteException();
public:
    Referencia();
    Referencia(const string& referencia);
    const string getReferencia();
    void setReferencia(const string &referencia);

};

#endif //HEADERS_MODEL_REFERENCIA_H
