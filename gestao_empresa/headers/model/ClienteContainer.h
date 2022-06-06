//
// Created by bilax on 01/06/2022.
//

#ifndef LASTTEST_LOG_CLIENTECONTAINER_H
#define LASTTEST_LOG_CLIENTECONTAINER_H

#include <list>
#include "Cliente.h"

class ClienteContainer {
private:
    list<Cliente> clientes;
    list<Cliente>::iterator procura(int numero);

public:

};


#endif //LASTTEST_LOG_CLIENTECONTAINER_H
