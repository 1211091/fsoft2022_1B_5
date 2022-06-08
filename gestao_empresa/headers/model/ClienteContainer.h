//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_CLIENTECONTAINER_H
#define HEADERS_MODEL_CLIENTECONTAINER_H

#include <list>
#include "Cliente.h"

class ClienteContainer {
private:
    list<Cliente> clientes;
    list<Cliente>::iterator procura(string nomeLoja);


public:
    list<Cliente> getAll();
    Cliente* get(string nomeLoja);
    void adicionarCliente(const string& CLiente);
    void removerCliente (const string& CLiente);



};


#endif //HEADERS_MODEL_CLIENTECONTAINER_H
