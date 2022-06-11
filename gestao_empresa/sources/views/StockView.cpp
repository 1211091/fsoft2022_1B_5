//
// Created by babis on 6/1/2022.
//
#include <iostream>
#include "StockView.h"
#include "Utils.h"
#include "Stock.h"
#include "InformacaoInvalidaException.h"
#include "StockContainer.h"
#include "Produto.h"

using namespace std;

Stock StockView::getStock(){
    Stock stock ();
    bool flag = false;
    do{
        try{
            flag = false;
            cout<<"Stock"<<endl;
            Stock stock = Stock::getQuantidade()(<#initializer#>,
                                                 Produto(__cxx11::basic_string(), __cxx11::basic_string()));
            stock.setQuantidade(stock);
        }catch(InformacaoInvalidaException& e){
            flag = true;
        }
    }while(flag == true);
    return reinterpret_cast<const Stock &>(stock);
}
void StockView::printStock(Stock *stock) {
    cout<<stock->getQuantidade()<<endl;
}

