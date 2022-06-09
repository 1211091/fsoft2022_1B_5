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
    list<Cliente>::iterator procurarCliente(string&nomeLoja);
    int numero;

public:
    list<Cliente> getAll();
    void adicionarCliente(Cliente nomeLoja);
    void eliminarCliente(string&nomeLoja);
    void atualizarCliente(string&nomeLoja);
    Cliente* getCliente(const Cliente& nomeLoja);
};


#endif //HEADERS_MODEL_CLIENTECONTAINER_H
