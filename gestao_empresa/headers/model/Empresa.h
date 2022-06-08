//
// Created by clara on 08/06/2022.
//

#ifndef HEADERS_MODEL_EMPRESA_H
#define HEADERS_MODEL_EMPRESA_H

#include <string>
#include "AdministradorContainer.h"
#include "ClienteContainer.h"
#include "ProdutoContainer.h"

using namespace std;

class Empresa{
private :
    string name;
    AdministradorContainer administrador;
    ClienteContainer clientes;
    ProdutoContainer produtos;


    void setInformacaoNaoExisteException();
public:
    Empresa();
    Empresa(const string& nome);
    Empresa(const Empresa& obj);
    const string& getName() const ;
    void setName(const string &name) ;

    AdministradorContainer & getAdministradorContainer();
    ClienteContainer & getClienteContainer();
    ProdutoContainer & getProdutoContainer();


};









#endif //HEADERS_MODEL_EMPRESA_H
