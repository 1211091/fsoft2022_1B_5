//
// Created by luis_ on 01/06/2022.
//

#ifndef HEADERS_EXCEPTIONS_INFORMACAOINVALIDAEXCEPTION_H
#define HEADERS_EXCEPTIONS_INFORMACAOINVALIDAEXCEPTION_H

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

#endif //HEADERS_EXCEPTIONS_INFORMACAOINVALIDAEXCEPTION_H
