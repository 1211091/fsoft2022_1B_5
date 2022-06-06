//
// Created by luis_ on 01/06/2022.
//

#ifndef HEADERS_EXCEPTIONS_INFORMACAODUPLICADAEXCEPTION_H
#define HEADERS_EXCEPTIONS_INFORMACAODUPLICADAEXCEPTION_H

#include <exception>
#include <string>
using namespace std;

class InformacaoDuplicadaException :public exception{
private:
    string informacao;
public:
    InformacaoDuplicadaException(string informacao);
    const char* what();
};

#endif //HEADERS_EXCEPTIONS_INFORMACAODUPLICADAEXCEPTION_H
