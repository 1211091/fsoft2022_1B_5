//
// Created by luis_ on 06/06/2022.
//
#include "ClienteContainer.h"
#include <iostream>
#include "Nome.h"

list<Cliente>::iterator ClienteContainer::procurarCliente(string&nomeLoja){
    list<Cliente>::iterator it = this->clientes.begin();
    for(it = this->clientes.begin(); it != this->clientes.end(); ++it){
        if((*it) == nomeLoja){
            return it;
        }
    }
    return it;
}
list<Cliente> ClienteContainer::getAll(){
    list<Cliente> lista(this->clientes);
    return lista;
}
void ClienteContainer::adicionarCliente(Cliente nomeLoja){
    string nomedaLoja = nomeLoja.getNomeLoja();
    list<Cliente>::iterator it = procurarCliente(nomedaLoja);
    if(it == this->clientes.end()){
        this->clientes.push_back(nomeLoja);
    }
}
void ClienteContainer::eliminarCliente(string&nomeLoja){
    list<Cliente>::iterator it = procurarCliente(nomeLoja);
    if(it != this->clientes.end()){
        this->clientes.erase(it);
        cout <<"O cliente: "<<nomeLoja<<"foi removido" <<endl;
    }else{
        cout<<"O cliente"<<nomeLoja<<"nao existe"<<endl;
    }
}
void ClienteContainer::atualizarCliente(string&nomeLoja){
    list<Cliente>::iterator it = procurarCliente(nomeLoja);
    if(it != this->clientes.end()){
        it->setNomeLoja(nomeLoja);
    }
}
