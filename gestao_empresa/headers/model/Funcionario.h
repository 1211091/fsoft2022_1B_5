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
    string nomeFuncionario;
public:
    Funcionario(const string &nomefuncionario,const string &funcao);
    ~Funcionario();
    void setFuncao(const string &funcao);
    const string getFuncao();
    string setNomeFuncionario(const string &nomeFuncionario);
    string getNomeFuncionario();
    Funcionario* getFuncionario(const Funcionario& nomeFuncionario);
    string setFuncionario(const string &funcionario);


    bool operator == (const Funcionario& nomeFuncionario) const;
    bool operator == (string nf) const;
};


#endif //HEADERS_MODEL_FUNCIONARIO_H
