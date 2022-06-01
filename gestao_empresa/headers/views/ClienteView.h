//
// Created by clara on 01/06/2022.
//

#ifndef MAIN_CPP_CLIENTEVIEW_H
#define MAIN_CPP_CLIENTEVIEW_H

#include <list>
#include "Cliente.h"

class ClienteView{
public:

    Cliente getCliente();
    void printCliente(Cliente *cliente);
    void printClientes(list<Cliente>& clientes);

};








#endif //MAIN_CPP_CLIENTEVIEW_H
