//
// Created by babis on 6/1/2022.
//
#include <iostream>
#include <limits>
#include "Utils.h"
using namespace std;

int Utils::getNumero(const string&  label){
    int numero;
    bool flag = false;
    do{
        cout<<label<<": ";
        flag = false;
        cin >> numero;
        if(cin.fail()){
            cout << "Not a number, please enter a number" << endl;
            cin.clear(); //corrects stream
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            flag = true;
        }
    }while(flag == true);
    cin.clear(); //corrects stream
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return numero;
}
string Utils::getString(const string&  label){
    string input;
    cout<<label<<": ";
    getline (cin, input);
    return input;
}
