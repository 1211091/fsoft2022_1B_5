//
// Created by babis on 6/14/2022.
//
#include <iostream>
#include "ProdutoContainer.h"
#include <string>
#include "InformacaoDuplicadaException.h"
#include "InformacaoNaoExisteException.h"

list<Produto>::iterator ProdutoContainer::procurarProduto(string& referencia){
    list<Produto>::iterator it = this->produtos.begin();
    for(; it != this->produtos.end(); ++it){
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
    }else{
        string msg = "Produto: " + std::string(obj.getReferencia());
        throw InformacaoDuplicadaException(msg);
    }
}

void ProdutoContainer::eliminarProduto(string&referencia){
    list<Produto>::iterator it = procurarProduto(referencia);
    if (it != this->produtos.end()) {
        this->produtos.erase(it);
        cout << "Produto com referencia: " << referencia << " vendido com sucesso!" << endl;

    } else {
        string msg = "Produto: " + std::string(referencia);
        throw InformacaoNaoExisteException(msg);
    }

}


void ProdutoContainer::atualizarProduto(string& referencia, string& tipo, int quantidade) {
    list<Produto>::iterator it = procurarProduto(referencia);
    if (it != this->produtos.end()) {
        it->setReferencia(referencia);
        it->setTipo(tipo);
        it->setQuantidade(quantidade);
    }
}
