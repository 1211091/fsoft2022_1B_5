//
// Created by babis on 6/1/2022.
//
#include <iostream>
#include "StockView.h"
#include "Utils.h"
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
            Stock stock = Produto::getQuantidade();
            stock.setQuantidade(stock);
        }catch(InformacaoInvalidaException& e){
            flag = true;
        }
    }while(flag == true);
    return stock;
}
void StockView::printStock(Stock *stock) {
    cout<<stock->getQuantidade()<<endl;
}

