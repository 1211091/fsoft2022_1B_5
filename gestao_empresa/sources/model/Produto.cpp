//
// Created by luis_ on 06/06/2022.
//
#include "Produto.h"
#include <iostream>
#include "InformacaoInvalidaException.h"
int Produto::Numero=1;
bool Produto::operator == (int numeroproduto) const{
    if(this->numeroproduto == numeroproduto){
        return true;
    }
    return false;
}
bool Produto::ReferenciaValida(const string &referencia){
    if(referencia.length() < 2){
        cout<<"A referencia tem de ter no minimo 2 caracteres."<<endl;
        return false;
    }
    return true;
}

bool Produto::TipoValido(const string &tipo){
    if(tipo.length() < 3){
        cout<<"O tipo tem de ter no minimo 3 caracteres."<<endl;
        return false;
    }
    return true;
}
bool Produto::QuantidadeValida(const int &quantidade) {
    if(quantidade < 1 && quantidadevendida > quantidade){
        cout<<"A quantidade tem de ser, no minimo, 1."<<endl;
        return false;
    }
    return true;
}


Produto::Produto(const string& referencia, const string&tipo,const int &quantidade){
    setProduto(referencia, tipo, quantidade);
    this->quantidadevendida=0;
    this->numeroproduto = Numero++;
}
Produto::~Produto(){
}
const string& Produto::getTipo() const{
    return tipo;
}
void Produto::setTipo(const string &tipo){
    if(TipoValido(tipo)){
        this->tipo = tipo;
    }else{
        string msg = "Produto: " + tipo;
        throw InformacaoInvalidaException(msg);
    }
}

void Produto::setQuantidade(int quantidade){
    if(QuantidadeValida(quantidade)){
        this->quantidade = quantidade;
    }else{
        string msg = "Produto: " + quantidade;
        throw InformacaoInvalidaException(msg);
    }
}
void Produto::setProduto(const string &referencia, const string &tipo,const int &quantidade){
    if(ReferenciaValida(referencia) && TipoValido(tipo) && QuantidadeValida(quantidade)){
        this->referencia = referencia;
        this->tipo = tipo;
        this->quantidade = quantidade;
    }
    else{
        string msg =std::string(referencia)+ "/"+std::string(tipo)+"/"+to_string(quantidade);
        throw InformacaoInvalidaException(msg);
    }
}
const string& Produto::getReferencia() const{
    return referencia;
}
void Produto::setReferencia(const string &referencia){
    if(ReferenciaValida(referencia)){
        this->referencia = referencia;
    }else{
        string msg = "Produto: " + referencia;
        throw InformacaoInvalidaException(msg);
    }
}

int Produto::getQuantidade()const {
    return quantidade;
}

Produto::Produto(const Produto &produto) {
    this->tipo = produto.tipo;
    this->referencia = produto.referencia;
    this->quantidade = produto.quantidade;
    this->numeroproduto = produto.numeroproduto;

}
int Produto::getNumeroProduto() const{
    return numeroproduto;
}
void Produto::setQuantidadeVendida(int q){
    int aux = this->quantidadevendida;
    this->quantidadevendida = aux + q;
}
int Produto::getQuantidadeVendida() const{
    return quantidadevendida;
}