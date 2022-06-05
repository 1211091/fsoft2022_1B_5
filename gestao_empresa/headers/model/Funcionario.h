//
// Created by bilax on 04/06/2022.
//

#ifndef HEAD_FUNCIONARIO_H
#define HEAD_FUNCIONARIO_H
#include "Nome.h"
#include <string>


class Funcionario: public Nome{
    string funcao;
    string nome;
    private:
    string Funcao(const string& funcao);
    void setFuncao(const string &funcao);
    const string getFuncao();
    Funcionario(const string& nome, const string& funcao);



};


#endif //HEAD_FUNCIONARIO_H
