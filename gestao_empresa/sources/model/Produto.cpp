//
// Created by luis_ on 06/06/2022.
//
#include "Produto.h"
#include "InformacaoInvalidaException.h"

bool Produto::isPointerNotNull(void * ptr){
    if(ptr == NULL){
        return false;
    }
    return true;
}
bool Produto::operator == (string& referencia) const{
    if(this->referencia == referencia){
        return true;
    }
    return false;
}
Produto::Produto(const string& referencia, const string&tipo){
    setProduto(produto);
}
Produto::~Produto(){
}
const string& Produto::getTipo() const{
    return this->tipo;
}
void Produto::setTipo(const string &tipo){
    this-> tipo;
}
string Produto::setProduto(string &produto){
    return produto;
}
const string& Produto::getReferencia() const{
    return referencia;
}
string Produto::getProduto() {
    return produto;
}


bool Produto::isReferenciaValid(const string &referencia){
    if(referencia.length() < 10){
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

void Produto::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}

int Produto::getQuantidade()const {
    return quantidade;
}
Produto::Produto(const Produto &produto) {
    this->tipo = produto.tipo;
    this->referencia = produto.referencia;

}
