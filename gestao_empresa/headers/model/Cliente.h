//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_CLIENTE_H
#define HEADERS_MODEL_CLIENTE_H

#include <string>
using namespace std;

class Cliente {
    private:
    string nomeLoja;
    static int Numero;
    int numerocliente;
    string cliente;
    bool NomeValido(const string& nomeLoja);
    public:
        Cliente(const string& nomeLoja);
        Cliente(const Cliente &cliente);
        ~Cliente();
        string getNomeLoja();
        void setNomeLoja(const string &nomeLoja);
        int getNumeroCliente();



    bool operator == (const Cliente& obj) const;
    bool operator == (int nc) const;
};

#endif //HEADERS_MODEL_CLIENTE_H
