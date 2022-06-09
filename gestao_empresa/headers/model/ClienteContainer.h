//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_CLIENTECONTAINER_H
#define HEADERS_MODEL_CLIENTECONTAINER_H

#include <list>
#include "Cliente.h"
#include "Nome.h"

class ClienteContainer {
private:
    list<Cliente> clientes;
    list<Cliente>::iterator procura(string nomeLoja);
    int numero;

public:
    list<Cliente> getAll();
    Cliente* getCliente(string nomeLoja);
    void adicionarCliente(Cliente);
    void eliminarCliente(Cliente);
    void atualizarCliente(string&nomeLoja, string&nomeGerente);
};


#endif //HEADERS_MODEL_CLIENTECONTAINER_H
