//
// Created by luis_ on 06/06/2022.
//
#include "ClienteContainer.h"
#include <string>
#include <iostream>
#include "InformacaoDuplicadaException.h"
#include "InformacaoNaoExisteException.h"


list<Cliente>::iterator ClienteContainer::procurarCliente(int&numerocliente) {
    list<Cliente>::iterator it = this->clientes.begin();
    for (it = this->clientes.begin(); it != this->clientes.end(); ++it) {
        if ((*it) == numerocliente) {
            return it;
        }
    }
    return it;
}
list<Cliente> ClienteContainer::getAll(){
    list<Cliente> lista(this->clientes);
    return lista;
}
Cliente* ClienteContainer::get(int numerocliente){
    list<Cliente>::iterator it = procurarCliente(numerocliente);
    if (it != this->clientes.end()){
        return &(*it);
    } return NULL;
}
void ClienteContainer:: adicionarCliente(Cliente &obj){
    int numerodocliente = obj.getNumeroCliente();
    list<Cliente>::iterator it = procurarCliente(numerodocliente);
    if (it== this->clientes.end()) {
        this->clientes.push_back(obj);
    }else{
        string msg = "Cliente: " + std::string(obj.getNomeLoja());
        throw InformacaoDuplicadaException(msg);
    }
}
void ClienteContainer::eliminarCliente(int numerocliente){
    list<Cliente> ::iterator it = procurarCliente(numerocliente);
    if(it != this-> clientes.end()){
            this-> clientes.erase(it);
            cout << "O cliente "<< numerocliente << " foi removido com sucesso!" <<endl;
        }else {
        string msg = "Cliente: " + to_string(numerocliente);
        throw InformacaoNaoExisteException(msg);
        }
    }

void ClienteContainer::atualizarCliente(string&nomeLoja, int numerocliente){
    list<Cliente>::iterator it = procurarCliente(numerocliente);
    if(it != this->clientes.end()){
        it->setNomeLoja(nomeLoja);

    }
}

