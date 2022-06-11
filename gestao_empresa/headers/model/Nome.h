//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_NOME_H
#define HEADERS_MODEL_NOME_H
#include <string>
#include <vector>
using namespace std;

class Nome{
    protected:
        string nome;
        virtual bool ValidacaoNome(const string& nome);

    public:

        Nome(const string& nome);
        void setNome(const string &nome);
        string getNome();

};

#endif //HEADERS_MODEL_NOME_H
