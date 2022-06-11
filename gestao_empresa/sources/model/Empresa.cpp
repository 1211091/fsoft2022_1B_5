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
    this->clientes = obj.clientes;
    this->produtos = obj.produtos;
}

const string& Empresa::getNome() const {
    return nome;
}

void Empresa::setNome(const string &nome) {
    this->nome = nome;
}
Empresa::~Empresa() {

}
ProdutoContainer &Empresa::getProdutoContainer() {
    return produtos;
}


FuncionarioContainer &Empresa::getFuncionarioContainer() {
    return funcionarios;
}

ClienteContainer &Empresa::getClienteContainer() {
    return clientes;
}
