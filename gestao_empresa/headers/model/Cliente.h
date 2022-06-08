//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_CLIENTE_H
#define HEADERS_MODEL_CLIENTE_H
#include "Nome.h"
#include <string>

class Cliente: public Nome{
    private:
    string nome;
    public:
        Cliente(const string& nomeGerente,const string& nomeLoja);
        ~Cliente();
    const Nome& getNomeGerente() const;
    void setNomeGerente (const Nome &NomeGerente);
    const Nome& getNomeLoja() const;
    void setNomeLoja(Nome &NomeLoja);




};

#endif //HEADERS_MODEL_CLIENTE_H
