//
// Created by bilax on 04/06/2022.
//

#ifndef HEADERS_MODEL_FUNCIONARIO_H
#define HEADERS_MODEL_FUNCIONARIO_H
#include "Nome.h"
#include <string>


class Funcionario: public Nome{
    string funcao;
    string nome;

    void setFuncao(const string &funcao);
    private:
    string Funcao(const string& funcao);
    const string getFuncao();
    Funcionario(const string& nome, const string& funcao);
};


#endif //HEADERS_MODEL_FUNCIONARIO_H
