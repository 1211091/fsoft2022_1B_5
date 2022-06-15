//
// Created by babis on 6/1/2022.
//
#include <iostream>
#include "ProdutoView.h"
#include "Utils.h"
#include "Produto.h"
#include "InformacaoInvalidaException.h"
using namespace std;

Produto ProdutoView::getProduto(){
    Produto produto("Referencia" , "Tipo", (int &) "Quantidade") ;
    bool flag;
    do{
        try{
            flag = false;
            cout<<"Produto"<<endl;
            string tipo = Utils::getString("Tipo de Produto");
            produto.setTipo(tipo);
            string referencia = Utils::getString("Referencia do Produto");
            produto.setReferencia(referencia);
            int quantidade = Utils::getNumero("Quantidade de Produto a adicionar");
            produto.setQuantidade(quantidade);
        }catch(InformacaoInvalidaException& e){
            flag = true;
        }
    }while(flag == true);
    return produto;
}
void ProdutoView::printProduto(Produto *produto) {
    cout<<"Referencia: "<<produto->getReferencia()<<"; Tipo: "<<produto->getTipo()<<"; Quantidade: "<<produto->getQuantidade()<<endl;
}
void ProdutoView::printProdutos(list<Produto> &produtos) {
    for (list<Produto>::iterator it = produtos.begin(); it != produtos.end() ; ++it) {
        printProduto(&*it);
    }
}
