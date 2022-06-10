//
// Created by babis on 6/1/2022.
//
#include <iostream>
#include "ProdutoView.h"
#include "Utils.h"
#include "InformacaoInvalidaException.h"
using namespace std;

Produto ProdutoView::getProduto(){
    Produto produtos ("Nome");
    bool flag = false;
    do{
        try{
            flag = false;
            cout<<"Produto"<<endl;
            string produto = Utils::getString("Produto");
            produtos.setProduto(produto);
            string referencia = ProdutoView::getReferencia("Referencia");
            produtos.setReferencia(referencia);
        }catch(InformacaoInvalidaException& e){
            flag = true;
        }
    }while(flag == true);
    return produtos;
}
string ProdutoView::printProdutos(Produto *produto, Referencia *referencias) {
    cout<<produto->getProduto()<<":"<<referencias->getReferencia()<<endl;
}
Referencia ProdutoView::getReferencia(){
    return referencia;
}