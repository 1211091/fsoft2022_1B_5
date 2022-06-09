//
// Created by bilax on 01/06/2022.
//

#ifndef HEADERS_MODEL_PRODUTO_H
#define HEADERS_MODEL_PRODUTO_H
#include <string>
#include "Stock.h"

using namespace std;
class Produto: public Stock{
private :
    string tipo;
    string produto;
    int referencia;
public :
    Produto(const string& tipo, const string& referencia);
    string Tipo(const string& tipo);
    const string& getTipo();
    void setTipo(const string &tipo);
    void setProduto(const string &produto);
    string Referencia(const string& Referencia);
    const string& getReferencia();
    void setReferencia(const string &referencia);
    int Quantidade(int quantidade);
    int getQuantidade();
    void setQuantidade(const string &quantidade);
    int Referencia(const int& Referencia);
    const int& getReferencia();
    void setReferencia(const int &referencia);
>>>>>>> 78c571fbabf16a6d13223f60a102a8365c22cbe9
};


#endif //HEADERS_MODEL_PRODUTO_H
