//
// Created by babis on 6/1/2022.
//
#include <iostream>
#include "ClienteView.h"
#include "Utils.h"
#include "InformacaoInvalidaException.h"
using namespace std;

Cliente ClienteView::getCliente(){
    Cliente cliente("Nome da Loja");
    bool flag = false;
    do{
        try{
            flag = false;
            cout<<"Cliente"<<endl;
            string nomeLoja = Utils::getString("Nome da loja");
            cliente.setNomeLoja(nomeLoja);
        }catch(InformacaoInvalidaException& e){
            flag = true;
        }
    }while(flag == true);
    return cliente;
}
void ClienteView::printCliente(Cliente *cliente) {
    cout << cliente->getNomeLoja() << endl;
}
void ClienteView::printClientes(list<Cliente>& clientes){
    for (list<Cliente>::iterator it=clientes.begin(); it != clientes.end(); ++it){
        printCliente(&*it);
    }
}

