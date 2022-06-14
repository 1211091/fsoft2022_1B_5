//
// Created by babis on 6/1/2022.
//
#include <iostream>
#include "ProdutoView.h"
#include "Utils.h"
#include "InformacaoInvalidaException.h"
using namespace std;

Produto ProdutoView::getProduto(){
    Produto produto("Referencia" , "Tipo") ;
    bool flag = false;
    do{
        try{
            flag = false;
            cout<<"Produto"<<endl;
            string tipo = Utils::getString("Tipo de Produto");
            produto.setTipo(tipo);
            string referencia = Utils::getString("Referencia do Produto");
        }catch(InformacaoInvalidaException& e){
            flag = true;
        }
    }while(flag == true);
    return produto;
}
void ProdutoView::printProduto(Produto *produto) {
    cout<<produto->getReferencia()<<" - "<<produto->getTipo()<<"."<<endl;
}
void ProdutoView::printProdutos(list<Produto> &produtos) {
    for (list<Produto>::iterator it = produtos.begin(); it != produtos.end() ; ++it) {
        printProduto(&*it);
    }
}
