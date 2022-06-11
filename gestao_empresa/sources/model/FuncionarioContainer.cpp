//
// Created by babis on 6/9/2022.
//
#include "FuncionarioContainer.h"
#include "Funcionario.h"
#include "InformacaoDuplicadaException.h"
#include <iostream>
#include <string>

list<Funcionario>::iterator FuncionarioContainer::procurarFuncionario(string&nomeFuncionario){
    list<Funcionario>::iterator it = this->funcionarios.begin();
    for(it = this->funcionarios.begin(); it != this->funcionarios.end(); ++it){
        if((*it) == nomeFuncionario){
            return it;
        }
    }
    return it;
}

Funcionario* FuncionarioContainer::get(string& referencia){
    list<Funcionario>::iterator it = procurarFuncionario(referencia);
    if (it != this->funcionarios.end()){
        return &(*it);
    } return NULL;
}

list<Funcionario> FuncionarioContainer::getAll(){
    list<Funcionario> lista(this->funcionarios);
    return lista;
}
void FuncionarioContainer::adicionarFuncionario(Funcionario nomeFuncionario){
    string nomedoFuncionario =  nomeFuncionario.getNomeFuncionario();
    list<Funcionario>::iterator it = procurarFuncionario(nomedoFuncionario);
    if(it == this->funcionarios.end()){
        this->funcionarios.push_back(nomeFuncionario);

    }
}
void FuncionarioContainer::eliminarFuncionario(string&nomeFuncionario){
    list<Funcionario>::iterator it = procurarFuncionario(nomeFuncionario);
    if(it != this->funcionarios.end()){
        this->funcionarios.erase(it);
        cout <<"O cliente: "<<nomeFuncionario<<"foi removido" <<endl;
    }else{
        cout<<"O cliente"<<nomeFuncionario<<"nao existe"<<endl;
    }
}
void FuncionarioContainer::atualizarFuncionario(string&nomeFuncionario, string&funcao){
    list<Funcionario>::iterator it = procurarFuncionario(nomeFuncionario);
    if(it != this->funcionarios.end()){
        it->setNomeFuncionario(nomeFuncionario);

    }
}
