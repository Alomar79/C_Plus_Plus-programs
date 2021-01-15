#pragma once
#ifndef BOOK_H
#define BOOK_H
#include "Product.h"
#include <fstream>

using namespace std;
class Book : public Product
{
private:
    string ISDN;
public:
    Book();
    Book(string type, int id, string title, double cost, int qty, int qtySold, string ISDN);
  void writeNewProduct();
    void updateStockItem(int id, int n, std::string qty_arg);
  //-----
};
#endif
