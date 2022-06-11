//
// Created by clara on 01/06/2022.
//

#include <iostream>
#include <list>
#include "View.h"
#include "Utils.h"
#include "InformacaoInvalidaException.h"
using namespace std;

View::View(){
}


int View::menuEmpresa() {
    int op = -1;
    do{
        cout<<"\n\n********** Menu Empresa **********\n";
        cout<<"1 - Funcionario\n";
        cout<<"2 - Cliente\n";
        cout<<"3 - Produto\n";
        cout<<"\n0 - Exit\n";
        op = Utils::getNumero("Option");
    }while(op < 0 || op > 3);
    return op;
}
int View::menuFuncionario() {
    int op = -1;
    do{
        cout<<"\n\n********** Menu Funcionario **********\n";
        cout<<"1 - Adicionar funcionario\n";
        cout<<"2 - Eliminar funcionario\n";
        cout<<"3 - Lista dos funcionarios\n";
        cout<<"4 - Atualizar lista\n";
        cout<<"5 - Encontrar funcionario\n";
        cout<<"\n0 - Exit\n";
        op = Utils::getNumero("Option");
    }while(op < 0 || op > 5);
    return op;
}

int View::menuCliente() {
    int op = -1;
    do{
        cout<<"\n\n********** Menu Cliente **********\n";
        cout<<"1 - Adicionar Cliente\n";
        cout<<"2 - Eliminar Cliente\n";
        cout<<"3 - Lista dos Clientes\n";
        cout<<"4 - Atualizar Lista\n";
        cout<<"5 - Encontrar cliente\n";
        cout<<"\n0 - Exit\n";
        op = Utils::getNumero("Option");
    }while(op < 0 || op > 5);
    return op;
}
int View::menuProduto() {
    int op = -1;
    do{
        cout<<"\n\n********** Menu Produto **********\n";
        cout<<"1 - Criar produto\n";
        cout<<"2 - Lista dos tipos de produto\n";
        cout<<"3 - Vender produto\n";
        cout<<"4 - Lista da quantidade de Produtos em stock \n";
        cout<<"5 - Atualizar lista\n";
        cout<<"6 - Encontrar Produto em Stock\n";
        cout<<"\n0 - Exit\n";
        op = Utils::getNumero("Option");
    }while(op < 0 || op > 6);
    return op;
}





