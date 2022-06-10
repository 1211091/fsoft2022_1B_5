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

bool Produto::operator == (string rfr) const{
    if(this->referencia == rfr){
        return true;
    }
    return false;
}

Produto::Produto(const string& referencia, const string&tipo, int quantidade){
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

string Produto::getProduto() {
    return produto;
}
void Produto::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}
const Stock Produto::getQuantidade()const {
    return quantidade;
}

bool Produto::isReferenciaValid(const string &referencia){
    if(referencia.length() != 10){
        return false;
    }
    return true;
}
void Produto::setReferencia(const string &referencia){

    if(isReferenciaValid(referencia)){
        this->referencia = referencia;
    }
    else{

        string msg = "Produto: " + referencia;
        throw InformacaoInvalidaException(msg);
    }
}

string Produto::Referencia(const string &referencia) {

}

<<<<<<< HEAD
string Produto::Referencia() {
}

void Produto::setInformacaoNaoExisteException() {

}

=======
>>>>>>> 5e299e5a3577eed7fab26b4713d059c5ae39cebf
