//
// Created by clara on 09/06/2022.
//
#include <iostream>
#include "ProdutoContainer.h"
#include "Referencia.h"


list<Produto>:: iterator ProdutoContainer::procurarProduto(Produto referencia, const string &tipo) {
    list<Produto>::iterator it= this->produtos.begin();
    for(it = this->produtos.begin(); it != this->produtos.end();++it){
        if((*it) == referencia){
            return it;
        }
    }
    return it;
}


list<Produto> ProdutoContainer::getAll(){
    list<Produto> lista(this->produtos);
    return lista;
}


void ProdutoContainer::adicionarProduto(Produto referencia) {
    string referencia1 = referencia.getReferencia();
    list<Produto>::iterator it = procurarProduto(referencia,tipo);
    if (it == this->produto.end()) {
        this->produto.push_back(referencia);

    }
}
void ProdutoContainer::eliminarProduto(const string& referencia){
    list<Produto>::iterator it = procurarProduto((const Produto &) referencia);
    if (it != this->produto.end()) {
        this->produto.erase(it);
        cout << "Produto com referencia:" << to_string(referencia) << "removido" << endl;

    } else {
        cout << "Produto com referencia:" << to_string(referencia) << "não existe" << endl;
    }

}


void  ProdutoContainer::atualizarProduto(string& referencia,string &tipo){
    list<Produto>::iterator it = procurarProduto(referencia);
    list<Produto>::iterator its = procurarProduto(tipo);
    if(it != this->produtos.end()){
        it->setReferencia(referencia);
        its->setTipo(tipo);
    }
}

