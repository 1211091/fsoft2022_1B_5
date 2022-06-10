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
    string nomeFuncionario;
public:
    Funcionario(const string &nomefuncionario,const string &funcao);
    ~Funcionario();
    string setFuncao(const string &funcao);
    string Funcao(const string &funcao);
    string setNomeFuncionario(const string &nomeFuncionario);
    string getNomeFuncionario();
    string getFuncao();

    bool operator == (const Funcionario& nomeFuncionario) const;
    bool operator == (string nf) const;
};


#endif //HEADERS_MODEL_FUNCIONARIO_H
