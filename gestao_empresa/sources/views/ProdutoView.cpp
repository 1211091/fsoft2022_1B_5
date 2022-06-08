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
            int referencia = Utils::getReferencia("Referencia");
            produtos.setReferencia(referencia);
        }catch(InformacaoInvalidaException& e){
            flag = true;
        }
    }while(flag == true);
    return produtos;
}
void ProdutoView::printProduto(Produto *produtos) {
    cout<<produtos->getProduto()<<":"<<produtos->getReferencia()<<endl;
}

