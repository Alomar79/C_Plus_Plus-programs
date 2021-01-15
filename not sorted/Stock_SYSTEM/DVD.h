#pragma once
#ifndef DVD_H
#define DVD_H
#include "Product.h"
#include <fstream>

using namespace std;
class DVD : public Product
{
private:
    string director;
    double play_time;
    string genre;
public:
    DVD();
  //~DVD();
    DVD(string type, int id, string title, double cost, int qty,
        int qtySold, string director, double play_time, string genre);
    void writeNewProduct();
    void updateStockItem(int id, int n, std::string qty_arg);

};

#endif // DVD_H
