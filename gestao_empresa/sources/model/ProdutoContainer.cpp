//
// Created by babis on 6/14/2022.
//
#include <iostream>
#include "ProdutoContainer.h"
#include <string>
#include "InformacaoDuplicadaException.h"
#include "InformacaoNaoExisteException.h"

list<Produto>::iterator ProdutoContainer::procurarProduto(int &numeroproduto){
    list<Produto>::iterator it = this->produtos.begin();
    for(; it != this->produtos.end(); ++it){
        if((*it) == numeroproduto){
            return it;
        }
    }
    return it;
}

Produto* ProdutoContainer::get(int numeroproduto){
    list<Produto>::iterator it = procurarProduto(numeroproduto);
    if (it != this->produtos.end()){
        return &(*it);
    } return NULL;
}

list<Produto> ProdutoContainer::getAll(){
    list<Produto> lista(this->produtos);
    return lista;
}


void ProdutoContainer::adicionarProduto(Produto&obj) {
    int numerodoproduto =  obj.getNumeroProduto();
    list<Produto>::iterator it = procurarProduto(numerodoproduto);
    if (it == this->produtos.end()) {
        this->produtos.push_back(obj);
    }else{
        string msg = "Produto: " + std::string(obj.getReferencia());
        throw InformacaoDuplicadaException(msg);
    }
}

void ProdutoContainer::venderProduto(int numeroproduto, int quantidade){
    list<Produto>::iterator it = procurarProduto(numeroproduto);
    atualizarQuantidade(numeroproduto, quantidade);
    if (it == this->produtos.end()) {
        string msg = "Produto: " + to_string(numeroproduto);
        throw InformacaoNaoExisteException(msg);
    }

}
void ProdutoContainer::atualizarQuantidade(int numeroproduto, int q){
    list<Produto>::iterator it = procurarProduto(numeroproduto);
    if(it!=this->produtos.end()){
        Produto *produto = &*it;
        int a = produto->getQuantidade();
        int b = produto->getQuantidadeVendida();
        q = a - q;
        if(q<0){
            cout<<"Nao existe a quantidade desejada."<<endl;
        }else{
            cout << "Produto numero " << numeroproduto << " vendido com sucesso!" << endl;
            it->setQuantidade(q);
            it->setQuantidadeVendida(b+q);
        }
    }
}

void ProdutoContainer::atualizarProduto(string& referencia, string& tipo, int quantidade, int numeroproduto) {
    list<Produto>::iterator it = procurarProduto(numeroproduto);
    if (it != this->produtos.end()) {
        it->setReferencia(referencia);
        it->setTipo(tipo);
        it->setQuantidade(quantidade);
    }
}
