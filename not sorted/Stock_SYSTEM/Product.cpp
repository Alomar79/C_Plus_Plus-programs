#include "Product.h"
#include <iostream>

Product::Product()
{
    this->type = "";
    this->id = 0;
    this->title = "";
    this->cost = 0;
    this->qty = 0;
    this->qtySold = 0;
}
//Product::~Product(){}
Product::Product(string type, int id, string title, double cost,
    int qty, int qtySold)
{
    this->type = type;
    this->id = id;
    this->title = title;
    this->cost = cost;
    this->qty = qty;
    this->qtySold = qtySold;
}


//void Product::set_common_Product()
//{
//    cout << "Enter item id : ";
//    cin >> id;
//    cout << "Enter item title : ";
//    cin >> title;
//    cout << "Enter item cost : ";
//    cin >> cost;
//    cout << "Enter item Qty : ";
//    cin >> qty;
//}
