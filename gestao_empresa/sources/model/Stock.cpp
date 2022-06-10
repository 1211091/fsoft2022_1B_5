//
// Created by luis_ on 08/06/2022.
//

#include "Stock.h"
#include "InformacaoInvalidaException.h"

Stock::Stock (Produto *tipo, Referencia *referencia) {
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

int Stock::Quantidade(int quantidade){

}

int Stock::setQuantidade(int quantidade){
    if(produto_existe(quantidade)){
        this->quantidade = quantidade;
    }else{
        string str = "Quantidade de produto inválida";

    }
    this->quantidade = quantidade;
}
int Stock::getQuantidade(){
    return quantidade;
}

Referencia* Stock::getReferencia() const {
    return referencia;
}
Produto* Stock::getTipo(){
    return tipo;
}
int Stock::setTipo(Produto *tipo){
        if(isPointerNotNull(tipo)==true){
            this->tipo = tipo;
        }else{
            string msg = "Stock: tipo = NULL";
            throw InformacaoInvalidaException(msg);
        }
    }

int Stock::setReferencia(Referencia * referencia){
    if(isPointerNotNull(referencia)==true){
        this->referencia = referencia;
    }else{
        string msg = "Stock: referencia = NULL";
        throw InformacaoInvalidaException(msg);
    }
}
}