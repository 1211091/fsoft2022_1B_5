//
// Created by clara on 08/06/2022.
//

#include "Empresa.h"
#include "InformacaoNaoExisteException.h"

Empresa::Empresa(){
    this->nome = "";

}
Empresa::Empresa(const string& nome){
    this->nome = nome;
}
Empresa::Empresa(const Empresa& obj){
    this->nome = obj.nome;
    this->administrador = obj.administrador;
    this->clientes = obj.clientes;
    this->produtos = obj.produtos;
    this->stock = obj.stock;
}

const string& Empresa::getNome() const {
    return nome;
}

void Empresa::setNome(const string &nome) {
    this->nome = nome;
}

AdministradorContainer & Empresa::getAdministradorContainer(){
    return this->administrador;
}
/*ClienteContainer & Empresa::getClienteContainer(){
    return this->clientes;
}
ProdutoContainer & Empresa::getProdutoContainer() {
    return this->produtos;
}
StockContainer & Empresa::getStockContainer(){
    return this->stock;
}
FuncionarioContainer & Empresa::getFuncionarioContainer(){
    return this->funcionarios;
}*/

