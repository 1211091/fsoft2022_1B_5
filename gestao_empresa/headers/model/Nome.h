//
// Created by bilax on 01/06/2022.
//

#ifndef MAIN_CPP_NOME_H
#define MAIN_CPP_NOME_H

#include <string>
using namespace std;


class Nome{
    protected:
        string nome;
        string nomeGerente;
        string nomeLoja;
        bool ValidacaoNome(const string& nome);

    public:
        Nome(const string& nome);
        void setNome(const string &nome);
        const string& getNome() const;
        string NomeGerente(const basic_string<char> &nomeGerente);

};

#endif //MAIN_CPP_NOME_H
