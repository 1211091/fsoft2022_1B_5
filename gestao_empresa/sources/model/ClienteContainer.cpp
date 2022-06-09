//
// Created by luis_ on 06/06/2022.
//
#include "ClienteContainer.h"
#include <iostream>
#include "Nome.h"

list<Cliente>::iterator ClienteContainer::procurar(string&nomeLoja){
    list<Cliente>::iterator it = this->clientes.begin();
    for(it = this->clientes.begin(); it != this->clientes.end(); ++it){
        if((*it) == nomeLoja){
            return it;
        }
    }
    return it;
}
list<Cliente> getAll(){

}
void ClienteContainer::adicionarCliente(const Cliente& nomeLoja){
    string nomedaLoja = nomeLoja.getNome();
    list<Cliente>::iterator it = procurar(nomedaLoja);
    if(it == this->clientes.end()){
        this->clientes.push_back(nomeLoja);
    }
}
void ClienteContainer::eliminarCliente(string&nomeLoja){
    list<Cliente>::iterator it = procurar(nomeLoja);
    if(it != this->clientes.end()){
        this->clientes.erase(it);
        cout <<"O cliente: "<<nomeLoja<<"foi removido" <<endl;
    }else{
        cout<<"O cliente"<<nomeLoja<<"nao existe"<<endl;
    }
}
void ClienteContainer::atualizarCliente(string&nomeLoja){
    list<Cliente>::iterator it = procurar(nomeLoja);
    if(it != this->clientes.end()){
        it->setNome(nomeLoja);
    }
}