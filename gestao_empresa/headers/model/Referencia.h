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
    int numero;
    AdministradorContainer administrador;
    ClienteContainer clientes;
    ProdutoContainer produtos;

    void setInformacaoNaoExisteException();
public:
    Referencia();
    string Referencia(const string& Referencia);
    const string& getReferencia();
    void setReferencia(const string &referencia);

    void setNumero(const Numero &numero) ;

    AdministradorContainer & getAdministradorContainer();
    ClienteContainer & getClienteContainer();
    ProdutoContainer & getProdutoContainer();
};

#endif //HEADERS_MODEL_REFERENCIA_H
