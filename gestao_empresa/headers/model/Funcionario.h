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
    Funcionario(const string &nome,const string &funcao);
    ~Funcionario();
    void setFuncao(const string &funcao);
    string NomeFuncionario(const string& nomeFuncionario);
    string setNomeFuncionario(const string &nomeFuncionario);
    string getNomeFuncionario();
    
    const string getFuncao();
    Funcionario* getFuncionario(const Funcionario& nomeFuncionario);

    bool operator == (const Funcionario& nomeFuncionario) const;
    bool operator == (string nf) const;
};


#endif //HEADERS_MODEL_FUNCIONARIO_H
