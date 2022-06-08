//
// Created by clara on 08/06/2022.
//

#ifndef FSOFT_2022_1B_5_EMPRESA_H
#define FSOFT_2022_1B_5_EMPRESA_H

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


    void setDataForConsistency();
public:
    Empresa();
    Empresa(const string& name);
    Empresa(const Empresa& obj);
    const string& getName() const ;
    void setName(const string &name) ;

    AdministradorContainer & getAdministradorContainer();
    ClienteContainer & getClienteContainer();
    ProdutoContainer & getProdutoContainer();


};









#endif //FSOFT_2022_1B_5_EMPRESA_H
