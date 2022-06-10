//
// Created by bilax on 06/06/2022.
//
#include <iostream>
#include "AdministradorContainer.h"


/*Funcionario* AdministradorContainer::getFuncionario(){
    list<Administrador>::iterator it = getAdministrador();
        return it;
}
int AdministradorContainer::getStock(){
    return Stock;

}
int AdministradorContainer::getNomeLoja(){
    return nomeLoja;

}
int AdministradorContainer::getProduto(){
    return produto;

}
int AdministradorContainer::getAdministrador(){
    return administrador;
}*/

ClienteContainer & AdministradorContainer::getCliente(){
    return this->clientes;
}
ProdutoContainer & AdministradorContainer::getProduto() {
    return this->produtos;
}
StockContainer & AdministradorContainer::getStock(){
    return this->stock;
}
FuncionarioContainer & AdministradorContainer::getFuncionario(){
    return this->funcionarios;
}
