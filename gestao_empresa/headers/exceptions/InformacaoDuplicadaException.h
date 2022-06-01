//
// Created by luis_ on 01/06/2022.
//

#ifndef MAIN_CPP_INFORMACAODUPLICADAEXCEPTION_H
#define MAIN_CPP_INFORMACAODUPLICADAEXCEPTION_H

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

#endif //MAIN_CPP_INFORMACAODUPLICADAEXCEPTION_H
