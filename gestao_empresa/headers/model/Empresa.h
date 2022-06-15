//
// Created by clara on 08/06/2022.
//

#ifndef HEADERS_MODEL_EMPRESA_H
#define HEADERS_MODEL_EMPRESA_H

#include <string>
#include "ClienteContainer.h"
#include "ProdutoContainer.h"
#include "FuncionarioContainer.h"
#include "InformacaoNaoExisteException.h"

class Empresa{
private :
    string nome;
    ClienteContainer clientes;
    ProdutoContainer produtos;
    FuncionarioContainer funcionarios;

public:
    Empresa();
    Empresa(const string& nome);
    Empresa(const Empresa& obj);
    const string& getNome() const ;
    void setNome(const string &nome) ;
    ~Empresa();
    ClienteContainer & getClienteContainer();
    ProdutoContainer & getProdutoContainer();
    FuncionarioContainer & getFuncionarioContainer();



};









#endif //HEADERS_MODEL_EMPRESA_H
