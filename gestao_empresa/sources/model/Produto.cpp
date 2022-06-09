//
// Created by luis_ on 06/06/2022.
//
#include "Produto.h"
#include "ProdutoContainer.cpp"
#include "ProdutoContainer.h"


Produto* getProduto(string referencia,const string &tipo) {
    list<Produto>::iterator it = procurarProduto(referencia){
        if (it != this->produtos.end()) {
            return &(*it);
        }
        return NULL;
    }
}

Produto::Produto(const string& referencia, const string&tipo){
    setProduto(produto);
}
Produto::~Produto(){
}


/*Produto::Produto(const string &tipo, const string &referencia){
        this->referencia=referencia;
        this->tipo= tipo;
    }
}*/





}