#pragma once
#ifndef MAGAZINE_H
#define MAGAZINE_H
#include "Product.h"
#include <fstream>

using namespace std;
class Magazine : public Product
{
private:
    int issue_number;
public:
    Magazine();
  //~Magazine();
    Magazine(string type, int id, string title, double cost, int qty, int qtySold,
        int issue_number);
    void writeNewProduct();
    void updateStockItem(int id, int n, std::string qty_arg);
  //---
};
#endif
