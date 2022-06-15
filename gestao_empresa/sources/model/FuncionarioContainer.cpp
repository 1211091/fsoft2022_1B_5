//
// Created by babis on 6/9/2022.
//
#include "FuncionarioContainer.h"
#include "Funcionario.h"
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
        cout <<"O funcionario "<<nomeFuncionario<<" foi removido " <<endl;
    }else{
        cout<<"O funcionario "<<nomeFuncionario<<" nao existe "<<endl;
    }
}
void FuncionarioContainer::atualizarFuncionario(string&nomeFuncionario, string&funcao){
    list<Funcionario>::iterator it = procurarFuncionario(nomeFuncionario);
    if(it == this->funcionarios.end()){
        cout<<"O funcionario nao existe"<<endl;
    }
    list<Funcionario>::iterator its = procurarFuncionario(funcao);
    if(its == this->funcionarios.end()){
        cout<< "Funcionario com funcao errada"<<endl;
    }
    if(it != this->funcionarios.end()){
        int opcao=0;
        cout<<"Para atualizar o nome digite 1, para atualizar funcao digite 2"<<endl;
        switch(opcao){
            case 1: {
                it->setNomeFuncionario(nomeFuncionario);
                break;
            }
            case 2: {
                its->setFuncao(funcao);
                break;
            }
            default:
                break;
        }
    }
}
