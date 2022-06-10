//
// Created by luis_ on 08/06/2022.
//

#include "Stock.h"
#include "InformacaoInvalidaException.h"

bool Stock::isPointerNotNull(void * ptr){
    if(ptr == NULL){
        return false;
    }
    return true;
}

bool Produto::isReferenciaValid(const string &referencia) {
    if(referencia.length() != 10){
        return false;
    }
    return true;
}

bool Stock::operator == (const Stock& obj) const{
    if(this->tipo == obj.tipo){
        return true;
    }
    return false;
}

Stock::Stock (Produto* produto) {
    this->setReferencia(referencia);
    this->setTipo(tipo);
}

Stock::Stock (const Stock& obj) {
    this->setReferencia(obj.referencia);
    this->setTipo(obj.tipo);
}

bool Stock::produto_existe(int quantidade){
    if(quantidade<0){
        bool resultado = false;
    }
    bool resultado=true;
    return resultado;
}


Produto* Stock::setTipo(Produto *tipo){
        if(isPointerNotNull(tipo)==true){
            this->tipo = tipo;
        }else{
            string msg = "Stock: tipo = NULL";
            throw InformacaoInvalidaException(msg);
        }
    }

void Stock::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}

int Stock::getQuantidade()const {
    return quantidade;
}

Produto* Stock::getProduto(){
    return this->produto;
}
void Stock::setProduto(Produto *produto){

    if(isPointerNotNull(produto)==true){
        this->produto = produto;
    }else{
        string msg = "Enroll: student = NULL";
        throw InformacaoInvalidaException(msg);
    }

}
string Stock::getReferencia() const {
    return referencia;
}

void Stock::setReferencia(const string &referencia){

    if(isReferenciaValid(referencia)){
        this->referencia = referencia;
    }
    else{

        string msg = "Produto: " + referencia;
        throw InformacaoInvalidaException(msg);
    }
}