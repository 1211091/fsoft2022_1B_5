//
// Created by luis_ on 06/06/2022.
//
#include "Produto.h"
#include "ProdutoContainer.cpp"
#include "ProdutoContainer.h"
#include "InformacaoInvalidaException.h"

bool Produto::isPointerNotNull(void * ptr){
    if(ptr == NULL){
        return false;
    }
    return true;
}
bool Produto::operator == (const Produto& obj) const{
    if(this->referencia == obj.referencia){
        return true;
    }
    return false;
}

bool Produto::operator == (Referencia* rfr) const{
    if(this->referencia == rfr){
        return true;
    }
    return false;
}

Produto::Produto(const string& referencia, const string&tipo){
    setProduto(produto);
}
Produto::~Produto(){
}
const string Produto::getTipo(){
    return this->tipo;
}
void Produto::setTipo(const string &tipo){
    this-> tipo;
}
string Produto::setProduto(string &produto){
    return produto;
}
Referencia* Produto::getReferencia() const {
    return referencia;
}
int Produto::setReferencia(Referencia * referencia){
    if(isPointerNotNull(referencia)==true){
        this->referencia = referencia;
    }else{
        string msg = "Stock: referencia = NULL";
        throw InformacaoInvalidaException(msg);
    }
}

string Produto::Tipo(string &tipo){

}

string Produto::getProduto() {
    return produto;
}
void Produto::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}
int Produto::getQuantidade()const {
    return quantidade;
}


