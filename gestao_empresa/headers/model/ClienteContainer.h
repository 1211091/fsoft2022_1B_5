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
    string nomeLoja;

public:
    list<Cliente> getAll();
    Cliente* get(string& referencia);
    Cliente* getNomeLoja(string nomeLoja);
    void adicionarCliente(Cliente NomeLoja);
    void eliminarCliente (string& NomeLoja);
    list<Cliente>::iterator procurarCliente(string&nomeLoja);
    void atualizarCliente(string&nomeLoja);
    string getNomeLoja();

};


#endif //HEADERS_MODEL_CLIENTECONTAINER_H
