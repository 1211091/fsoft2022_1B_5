//
// Created by clara on 09/06/2022.
//
#include <iostream>
#include "ProdutoContainer.h"
#include "Produto.h"
#include <string>
#include "InformacaoDuplicadaException.h"
#include "InformacaoNaoExisteException.h"
using namespace std;

list<Produto>::iterator ProdutoContainer::procurarProduto(string& referencia){
    list<Produto>::iterator it = this->produtos.begin();
    for(it = this->produtos.begin(); it != this->produtos.end(); ++it){
        if((*it) == referencia){
            return it;
        }
    }
    return it;
}

Produto* ProdutoContainer::get(string& referencia){
    list<Produto>::iterator it = procurarProduto(referencia);
    if (it != this->produtos.end()){
        return &(*it);
    } return NULL;
}

list<Produto> ProdutoContainer::getAll(){
    list<Produto> lista(this->produtos);
    return lista;
}


void ProdutoContainer::adicionarProduto(Produto&obj) {
    string referencia =  obj.getReferencia();
    list<Produto>::iterator it = procurarProduto(referencia);
    if (it == this->produtos.end()) {
        this->produtos.push_back(obj);
    }
}
void ProdutoContainer::eliminarProduto(string&referencia){
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
