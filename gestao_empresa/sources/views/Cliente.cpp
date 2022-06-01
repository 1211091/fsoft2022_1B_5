//
// Created by babis on 6/1/2022.
//
#include <iostream>
#include "ClienteView.h"
#include "Utils.h"
#include "InvalidDataException.h"
using namespace std;

Cliente ClienteView::getCliente(){
    Cliente cliente ("Nome");
    bool flag = false;
    do{
        try{
            flag = false;
            cout<<"Cliente"<<endl;
            string nome_gerente = Utils::getString("Nome do gerente");
            cliente.setNome(name);
            string nome = Utils::getString("Nome da loja");
            cliente.setFuncao(nome);
        }catch(InformacaoInvalidaException& e){
            flag = true;
        }
    }while(flag == true);
    return cliente;
}
void ClienteView::printCliente(Cliente *cliente) {
    cout << cliente->getNome() << endl;
}
void ClienteView::printClientes(list<Cliente>& clientes){
    for (list<Cliente>::iterator it=clientes.begin(); it != clientes.end(); ++it){
        printClientes(&*it);
    }
}

