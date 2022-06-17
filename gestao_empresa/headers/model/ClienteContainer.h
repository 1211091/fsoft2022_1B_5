//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_CLIENTECONTAINER_H
#define HEADERS_MODEL_CLIENTECONTAINER_H

#include <list>
#include "Cliente.h"
#include <string>

class ClienteContainer {
private:
    list<Cliente> clientes;

public:
    list<Cliente> getAll();
    Cliente* get(int referencia);
    void adicionarCliente(Cliente &obj);
    void eliminarCliente (int numerocliente);
    list<Cliente>::iterator procurarCliente(int &numerocliente);
    void atualizarCliente(string&nomeLoja, int numerocliente);

};


#endif //HEADERS_MODEL_CLIENTECONTAINER_H
