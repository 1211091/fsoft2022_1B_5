//
// Created by babis on 6/1/2022.
//
#include <iostream>
#include "StockView.h"
#include "Utils.h"
#include "InvalidDataException.h"
using namespace std;

Stock StockView::getStock(){
    Stock stock ();
    bool flag = false;
    do{
        try{
            flag = false;
            cout<<"Stock"<<endl;
            string stock = Utils::getStock("Stock");
            stock.setStock(stock);
        }catch(InformacaoInvalidaException& e){
            flag = true;
        }
    }while(flag == true);
    return stock;
}
void StockView::printStock(Stock *stock) {
    cout<<stock->getStock()<<endl;
}

