//
// Created by luis_ on 01/06/2022.
//

#ifndef MAIN_CPP_INFORMACAOINVALIDAEXCEPTION_H
#define MAIN_CPP_INFORMACAOINVALIDAEXCEPTION_H

#include <exception>
#include <string>

using namespace std;

class InformacaoInvalidaException :public exception{
private:
    string informacao;

public:
    InformacaoInvalidaException(string informacao);
    const char* what();
};

#endif //MAIN_CPP_INFORMACAOINVALIDAEXCEPTION_H
