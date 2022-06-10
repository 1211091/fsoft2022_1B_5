//
// Created by luis_ on 06/06/2022.
//
#include "Produto.h"
#include "ProdutoContainer.cpp"
#include "ProdutoContainer.h"

bool Produto::operator == (const Produto& obj) const{
    if(this->referencia == obj.referencia){
        return true;
    }
    return false;
}
bool Produto::operator == (string rfr) const{
    if(this->referencia == rfr){
        return true;
    }
    return false;
}
Produto* ProdutoContainer::getProduto(string referencia,const string &tipo) {
    list<Produto>::iterator it = procurarProduto(referencia);
        if (it != this->produtos.end()) {
            return &(*it);
        }
        return NULL;
    }


Produto::Produto(const string& referencia, const string&tipo){
    setProduto(produto);
}
Produto::~Produto(){
}
string Produto::getTipo(){
    return this->tipo;
}
string Produto::setTipo(string &tipo){
    return tipo;
}
string Produto::setProduto(string &produto){
    return produto;
}
string Produto::getReferencia(){
    return this->referencia;
}
string Produto::setReferencia(const string &referencia){
    return referencia;
}
string Produto::setQuantidade(const string &quantidade){
    return quantidade;
}
string Produto::Tipo(string &tipo){

}

string Produto::getProduto() {
    return produto;
}
