//
// Created by babis on 6/9/2022.
//
#include "FuncionarioContainer.h"
#include "Funcionario.h"
#include <iostream>
#include <string>
#include "InformacaoDuplicadaException.h"
#include "InformacaoNaoExisteException.h"

list<Funcionario>::iterator FuncionarioContainer::procurarFuncionario(int&numerofuncionario){
    list<Funcionario>::iterator it = this->funcionarios.begin();
    for(it = this->funcionarios.begin(); it != this->funcionarios.end(); ++it){
        if((*it) == numerofuncionario){
            return it;
        }
    }
    return it;
}

Funcionario* FuncionarioContainer::get(int numerofuncionario){
    list<Funcionario>::iterator it = procurarFuncionario(numerofuncionario);
    if (it != this->funcionarios.end()){
        return &(*it);
    } return NULL;
}

list<Funcionario> FuncionarioContainer::getAll(){
    list<Funcionario> lista(this->funcionarios);
    return lista;
}
void FuncionarioContainer::adicionarFuncionario(const Funcionario &obj){
    int numerodofuncionario =  obj.getNumeroFuncionario();
    list<Funcionario>::iterator it = procurarFuncionario(numerodofuncionario);
    if (it == this->funcionarios.end()) {
        this->funcionarios.push_back(obj);
    }else{
        string msg = "Funcionario: " + std::string(obj.getNomeFuncionario());
        throw InformacaoDuplicadaException(msg);
    }
}
void FuncionarioContainer::eliminarFuncionario(int numerofuncionario){
    list<Funcionario>::iterator it = procurarFuncionario(numerofuncionario);
    if(it != this->funcionarios.end()){
        this->funcionarios.erase(it);
        cout <<"O funcionario "<<numerofuncionario<<" foi removido " <<endl;
    }else{
        string msg = "Funcionario: " + to_string(numerofuncionario);
        throw InformacaoNaoExisteException(msg);
    }

}
void FuncionarioContainer::atualizarFuncionario(string&nomeFuncionario, string&funcao, int numerofuncionario){
    list<Funcionario>::iterator it = procurarFuncionario(numerofuncionario);
    if(it != this->funcionarios.end()){
        it -> setFuncao(funcao);
        it -> setNomeFuncionario(nomeFuncionario);
    }

}
