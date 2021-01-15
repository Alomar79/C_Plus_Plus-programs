#pragma once
#ifndef CD_H
#define CD_H
#include "Product.h"
#include <fstream>
using namespace std;
class CD : public Product
{
private:
    string artist;
    int truck_count;
    double play_time;
    string genre;
public:
    CD();
    CD(string type, int id, string title, double cost, int qty, int qtySold,
        string artist, int truck_count, double play_time, string genre);
    void writeNewProduct();
    void updateStockItem(int id, int n, std::string qty_arg);

    string get_artist()
    {
        return this->artist;
    }
};

#endif 
