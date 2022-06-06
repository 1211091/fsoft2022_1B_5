//
// Created by clara on 01/06/2022.
//

#ifndef HEADERS_VIEWS_CLIENTEVIEW_H
#define HEADERS_VIEWS_CLIENTEVIEW_H

#include <list>
#include "Cliente.h"

class ClienteView{
public:

    Cliente getCliente();
    void printCliente(Cliente *cliente);
    void printClientes(list<Cliente>& clientes);

};








#endif //HEADERS_VIEWS_CLIENTEVIEW_H
