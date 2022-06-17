//
// Created by luis_ on 06/06/2022.
//
#include "Produto.h"
int Produto::Numero=1;
bool Produto::operator == (int numeroproduto) const{
    if(this->numeroproduto == numeroproduto){
        return true;
    }
    return false;
}
Produto::Produto(const string& referencia, const string&tipo, int &quantidade){
    setProduto(produto);
    this->quantidadevendida=0;
    this->numeroproduto = Numero++;
}
Produto::~Produto(){
}
const string& Produto::getTipo() const{
    return tipo;
}
void Produto::setTipo(const string &tipo){
    this-> tipo = tipo;
}
void Produto::setQuantidade(int quantidade){
    this-> quantidade = quantidade;
}
string Produto::setProduto(string &produto){
    return this->produto = produto;
}
const string& Produto::getReferencia() const{
    return referencia;
}
void Produto::setReferencia(const string &referencia){
    this->referencia = referencia;
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
int Produto::getNumeroProduto(){
    return numeroproduto;
}
void Produto::setQuantidadeVendida(int q){
    int aux = this->quantidadevendida;
    this->quantidadevendida = aux + q;
}
int Produto::getQuantidadeVendida(){
    return quantidadevendida;
}