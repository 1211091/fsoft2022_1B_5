//
// Created by luis_ on 06/06/2022.
//
#include "ClienteContainer.h"
#include "InformacaoDuplicadaException.h"
#include <string>
#include <iostream>
using namespace std;

list<Cliente>::iterator ClienteContainer::procurarCliente(string&nomeLoja) {
    list<Cliente>::iterator it = this->clientes.begin();
    for (it = this->clientes.begin(); it != this->clientes.end(); ++it) {
        if ((*it) == nomeLoja) {
            return it;
        }
    }
}
list<Cliente> ClienteContainer::getAll(){
    list<Cliente> lista(this->clientes);
    return lista;
}
/*Cliente* ClienteContainer::getCliente(string nomeLoja){
    list<Cliente>::iterator it= procura(nomeLoja);
    if(it != this-> clientes.end()){
        return &(*it);
    }
    return NULL;
}*/
void ClienteContainer:: adicionarCliente(Cliente NomeLoja){
    string NomedaLoja = NomeLoja.getCliente();
    list<Cliente>::iterator it = procurarCliente(NomedaLoja);
    if (it== this->clientes.end()) {
        this->clientes.push_back(NomeLoja);
    }
}
void ClienteContainer::eliminarCliente(string &nomeLoja){
    list<Cliente> ::iterator it = procurarCliente(nomeLoja);
    if(it != this-> clientes.end()){
            this-> clientes.erase(it);
            cout << "O funcionario"<< nomeLoja << "foi removido" <<endl;
        }else {
            cout << "O funcionario"<< nomeLoja << "nao existe" <<endl;
        }
    }

}
void ClienteContainer::atualizarCliente(string&nomeLoja){
    list<Cliente>::iterator it = procurarCliente(nomeLoja);
    if(it != this->clientes.end()){
        it->setCliente(nomeLoja);

    }
}

string ClienteContainer::getNomeLoja() {
    return nomeLoja;
}
