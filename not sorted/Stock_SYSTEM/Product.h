#pragma once
#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Product
{
private:
    string type;
    int id;
    string title;
    double cost;
    int qty;
    int qtySold;
public:
    Product();
    Product(string type, int id, string title, double cost, int qty, int qtySold);
  //virtual ~Product();
    virtual void writeNewProduct() = 0;
    virtual void updateStockItem(int id, int n, std::string qty_arg) = 0;
};

#endif 
