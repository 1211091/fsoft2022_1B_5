//
// Created by clara on 08/06/2022.
//

#ifndef HEADERS_MODEL_EMPRESA_H
#define HEADERS_MODEL_EMPRESA_H

#include <string>
#include "AdministradorContainer.h"
#include "ClienteContainer.h"
#include "ProdutoContainer.h"
#include "StockContainer.h"
#include "FuncionarioContainer.h"
#include "InformacaoNaoExisteException.h"
using namespace std;

class Empresa{
private :
    string nome;
    AdministradorContainer administrador;
    ClienteContainer clientes;
    ProdutoContainer produtos;
    StockContainer stock;
    FuncionarioContainer funcionarios;


    void setInformacaoNaoExisteException();
public:
    Empresa();
    Empresa(const string& nome);
    Empresa(const Empresa& obj);
    const string& getNome() const ;
    void setNome(const string &nome) ;
    ~Empresa();
    AdministradorContainer & getAdministradorContainer();
    ClienteContainer & getClienteContainer();
    ProdutoContainer & getProdutoContainer();
    StockContainer & getStockContainer();
    FuncionarioContainer & getFuncionarioContainer();


};









#endif //HEADERS_MODEL_EMPRESA_H
