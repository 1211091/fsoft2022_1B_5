//
// Created by clara on 01/06/2022.
//

#ifndef HEADERS_VIEWS_STOCKVIEW_H
#define HEADERS_VIEWS_STOCKVIEW_H

#include "Stock.h"

class StockView{
public:

    Stock getStock();
    void printStock(Stock *stock);
};


#endif //HEADERS_VIEWS_STOCKVIEW_H
