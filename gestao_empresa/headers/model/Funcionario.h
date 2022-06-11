//
// Created by bila
// 6x on 04/06/2022.
//

#ifndef HEADERS_MODEL_FUNCIONARIO_H
#define HEADERS_MODEL_FUNCIONARIO_H
#include "Nome.h"
#include <string>


class Funcionario{
private:
    string funcao;
    string nomeFuncionario;
public:
    Funcionario(const string &nomefuncionario,const string &funcao);
    ~Funcionario();
    void setFuncao(const string &funcao);
    void setNomeFuncionario(const string &nomeFuncionario);
    string getNomeFuncionario();
    string getFuncao();

    bool operator == (const Funcionario& nomeFuncionario) const;
    bool operator == (string nf) const;

    Funcionario(string nomeFuncionario);
};


#endif //HEADERS_MODEL_FUNCIONARIO_H