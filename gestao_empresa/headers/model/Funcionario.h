//
// Created by bilax on 04/06/2022.
//

#ifndef HEADERS_MODEL_FUNCIONARIO_H
#define HEADERS_MODEL_FUNCIONARIO_H
#include "Nome.h"
#include <string>


class Funcionario{
private:
    string funcao;
    string nome;

public:
    Funcionario(const string &nome,const string &funcao);
    ~Funcionario();
    void setFuncao(const string &funcao);
    void setNome(const string &nome);
    const string getFuncao();

};


#endif //HEADERS_MODEL_FUNCIONARIO_H
