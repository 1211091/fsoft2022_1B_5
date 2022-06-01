//
// Created by luis_ on 01/06/2022.
//

#ifndef HEADERS_EXCEPTIONS_INFORMACAONAOEXISTEEXCEPTION_H
#define HEADERS_EXCEPTIONS_INFORMACAONAOEXISTEEXCEPTION_H

#include <exception>
#include <string>
using namespace std;

class InformacaoNaoExisteException :public exception {
private:
    string informacao;
public:
    InformacaoNaoExisteException(string informacao);
    const char* what();
};
#endif /* HEADERS_EXCEPTIONS_INFORMACAONAOEXISTEEXCEPTION_H*/
