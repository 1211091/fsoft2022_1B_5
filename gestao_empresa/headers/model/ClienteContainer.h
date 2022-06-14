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
    Cliente* get(string& referencia);
    void adicionarCliente(Cliente NomeLoja);
    void eliminarCliente (string& NomeLoja);
    list<Cliente>::iterator procurarCliente(string&nomeLoja);
    void atualizarCliente(string&nomeLoja);

};


#endif //HEADERS_MODEL_CLIENTECONTAINER_H
