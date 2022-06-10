//
// Created by bilax on 06/06/2022.
//
#include <iostream>
#include "AdministradorContainer.h"
#include "Administrador.h"


/*Funcionario* AdministradorContainer::getFuncionario(){
    list<Administrador>::iterator it = getAdministrador();
        return it;
}
int AdministradorContainer::getStock(){
    return Stock;

}
int AdministradorContainer::getCliente(){
    return Cliente;

}
int AdministradorContainer::getProduto(){
    return produto;

}
int AdministradorContainer::getAdministrador(){
    return administrador;
}*/


ProdutoContainer &Administrador::getProdutoContainer() {
    return produtos;
}

StockContainer &Administrador::getStockContainer() {
    return stock;
}

FuncionarioContainer &Administrador::getFuncionarioContainer() {
    return funcionarios;
}

ClienteContainer &Administrador::getClienteContainer() {
    return clientes;
}


