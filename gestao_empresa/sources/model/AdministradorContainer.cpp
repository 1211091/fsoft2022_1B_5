//
// Created by bilax on 06/06/2022.
//
#include <iostream>
#include "AdministradorContainer.h"


Funcionario* AdministradorContainer::getFuncionario(){
    list<Administrador>::iterator it = getAdministrador();
        return it;
}
int AdministradorContainer::getStock(){
    return Stock;

}
int AdministradorContainer::getCliente(){
    return cliente;

}
int AdministradorContainer::getProduto(){
    return produto;

}
int AdministradorContainer::getAdministrador(){
    return administrador;
}