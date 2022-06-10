//
// Created by clara on 09/06/2022.
//
#include <iostream>
#include "ProdutoContainer.h"
#include "Referencia.h"


list<Produto>::iterator ProdutoContainer::procurarProduto(string& referencia){
    list<Produto>::iterator it = this->produtos.begin();
    for(it = this->produtos.begin(); it != this->produtos.end(); ++it){
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


void ProdutoContainer::adicionarProduto(const Produto&obj) {
    string referencia1 = obj.getReferencia();
    list<Produto>::iterator it = procurarProduto(referencia1);
    if (it == this->produtos.end()) {
        this->produtos.push_back(obj);

    }
}
void ProdutoContainer::eliminarProduto(string& referencia){
    list<Produto>::iterator it = procurarProduto(referencia);
    if (it != this->produtos.end()) {
        this->produtos.erase(it);
        cout << "Produto com referencia:" << referencia << "removido" << endl;

    } else {
        cout << "Produto com referencia:" << referencia << "não existe" << endl;
    }

}


void ProdutoContainer::atualizarProduto(string& referencia, string& tipo){
    list<Produto>::iterator it = procurarProduto(referencia);
    if(it != this->produtos.end()){
        it->setReferencia(referencia);
        it->setTipo(tipo);
    }
}
