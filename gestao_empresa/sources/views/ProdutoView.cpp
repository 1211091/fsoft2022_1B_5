//
// Created by babis on 6/1/2022.
//
#include <iostream>
#include "ProdutosView.h"
#include "Utils.h"
#include "InformacaoInvalidaException.h"
using namespace std;

Produtos ProdutosView::getProdutos(){
    Produtos produtos ("Nome");
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
void ProdutosView::printProdutos(Produtos *produtos) {
    cout<<produtos->getProduto()<<":"<<produtos->getReferencia()<<endl;
}

