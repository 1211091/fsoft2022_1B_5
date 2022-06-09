//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_NOME_H
#define HEADERS_MODEL_NOME_H
#include <vector>
#include <string>
using namespace std;
using std::vector;

class Nome{
    protected:
        string nome;
        string nomeLoja;

        virtual bool ValidacaoNome(const string& nome);
        bool ValidacaoNome(const string& nome);

    public:
        string nomeLoja;
        Nome(const string& nome);
        void setNome(const string &nome);
        string getNome();
        string NomeLoja(const string& nomeLoja);
        string setNomeLoja(const string &nomeLoja);
        string getNomeLoja();

};

#endif //HEADERS_MODEL_NOME_H
