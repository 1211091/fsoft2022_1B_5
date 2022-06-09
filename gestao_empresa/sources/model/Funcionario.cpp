//
// Created by bilax on 06/06/2022.
//
#include "Nome.h"
#include "Funcionario.h"
#include "FuncionarioContainer.h"


Funcionario::Funcionario(const string &nomefuncionario,const string &funcao){
        setFuncao(funcao);
        setNomeFuncionario(nomefuncionario);
}
<<<<<<< HEAD
Funcionario::(const string& nome){
    setNomeFuncionario(nome);
}
}
=======
>>>>>>> 8ecce03757338d7c25649082cac7c1187621c50e
void setFuncao(const string &funcao){

}

const string getFuncao(){
    return this->funcao;
}
Funcionario* FuncionarioContainer::getFuncionario(const Funcionario& nomeFuncionario){
    list<Funcionario>::iterator it = procurarFuncionario((string &) nomeFuncionario);
    if(it != this->funcionarios.end()){
        return &(*it);
    }
    return NULL;
}
