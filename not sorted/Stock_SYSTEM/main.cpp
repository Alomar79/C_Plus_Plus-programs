// StockManagementSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
// type , id , title , cost , qty , director, artist, num_of_tracks, playing_time, genre

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
#include <vector>
#include "Product.h"
#include "CD.h"
#include "DVD.h"
#include "Book.h"
#include "Magazine.h"

using namespace std;

void displayMenu();
bool product_is_found(int id);
void correct_stock_level(int id, int n, string qtyArg);
std::vector<std::string> get_prod_vector(int id);
void view_sales_report();
void make_report(string type);
//std::vector<std::string> addNewItem();
//void view_sales_report();
//std::vector<std::string> strSplit(char* phrase, std::string delimiter);

int main()
{
    int choice = 0;
    int id;

    while (choice != 6)
    {
        displayMenu();
        cin >> choice;
        if (choice < 1 || choice> 6)
            cout << "Enter valid choice: ";

        if (choice == 1)
        {
            cout << "\nYour choice is: Sell items\n";
            cout << "What you want to sell? (item's id): ";
            cin >> id;

            int qty_sold;
            std::cout << "\nHow many items of product you sold? : ";
            std::cin >> qty_sold;
            correct_stock_level(id, qty_sold, "qtySold");
        }

        else if (choice == 2)
        {
            std::cout << "\nYour choice is: Restock item\n";
            std::cout << "\nWhat you want to Restock? (item's id): ";
            std::cin >> id;

            int qty_added;
            std::cout << "\nHow many items of product you want to Add? : ";
            std::cin >> qty_added;
            correct_stock_level(id, qty_added, "qty");
        }

        else if (choice == 3)
        {
            cout << "\nYour choice is: Add new item\n";

            int t;
            cout << "1) CD\n";
            cout << "2) DVD\n";
            cout << "3) Magazine\n";
            cout << "4) Book\n";
            cout << "\t Which type you want (1, 2, 3, 4) : ";
            cin >> t;
            //CD item;
            if (t == 1)
            {
                CD item;
                Product* prod = &item;
                prod->writeNewProduct();
            }
            if (t == 2)
            {
                DVD item;
                Product* prod = &item;
                prod->writeNewProduct();
            }
            if (t == 3)
            {
                Magazine item;
                Product* prod = &item;
                prod->writeNewProduct();
            }
            if (t == 4)
            {
                Book item;
                Product* prod = &item;
                prod->writeNewProduct();
            }
        }

        else if (choice == 4)
        {
            std::cout << "\nYour choice is: correct stock levels\n";
            std::cout << "\nEnter item (id) to update stock: ";
            std::cin >> id;
            std::vector<std::string> vProduct = get_prod_vector(id);
            if (product_is_found(id))
            {
                std::cout << "\nEnter new Qty: ";
                int quantity;
                std::cin >> quantity;
                int n = quantity - stod(vProduct[4]);
                correct_stock_level(id, n, "qty");
            }

        }

        else if (choice == 5)
        {
            std::cout << "\nYour choice is: View report of sales\n\n";
            view_sales_report();
        }
    }
        /*for (Product* s : Products)
        {
            delete s;
        }*/

        //Products.clear();
}

void displayMenu()
{
    std::cout << "\n\t+++++++++++++++++++++++++++++ \n";
    std::cout << "\t|| Stock Management System ||\n";
    std::cout << "\t+++++++++++++++++++++++++++++ \n\n";
    std::cout << "1) Sell items\n";
    std::cout << "2) Restock items\n";
    std::cout << "3) Add new items\n";
    std::cout << "4) Update stock quantity\n";
    std::cout << "5) View report of sales\n";
    std::cout << "6) Exit the program\n\n";
    std::cout << "Enter your choice: ";
}

bool product_is_found(int id)
{
    vector<std::string> p_vector = get_prod_vector(id);
    if (p_vector.empty())
    {
        std::cout << "The Product with id '" << id << "' is not found!\n";
        return false;
    }
    else
        return true;
}

std::vector<std::string> get_prod_vector(int id)
{
    std::vector<std::string> pVector;
    std::ifstream inFile("stock.txt");
    bool is_found = false;
    string arr[6];
    string line;
    while (getline(inFile, line))
    {
        if (line.length() < 1)
        {
            break;
        }
        istringstream iss(line);
        for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
        {
            string subs;
            iss >> subs;
            arr[i] = subs;
        }
        if (to_string(id) == arr[1] && line.length() > 1)
        {
            is_found = true;
            pVector.push_back(arr[0]);
            pVector.push_back(arr[1]);
            pVector.push_back(arr[2]);
            pVector.push_back(arr[3]);
            pVector.push_back(arr[4]);
            pVector.push_back(arr[5]);
        }
    }

    inFile.close();
    return pVector;
}

void correct_stock_level(int id, int n, string qtyArg)
{
    string type="";
    if (product_is_found(id))
    {
        vector<string> pVector = get_prod_vector(id);
        type = pVector[0];

    }

    if (type == "CD")
    {
        CD item;
        Product* prod = &item;
        prod->updateStockItem(id, n, qtyArg);
    }
    if (type == "DVD")
    {
        DVD item;
        Product* prod = &item;
        prod->updateStockItem(id, n, qtyArg);
    }
    if (type == "Magazine")
    {
        Magazine item;
        Product* prod = &item;
        prod->updateStockItem(id, n, qtyArg);
    }
    if (type == "Book")
    {
        Book item;
        Product* prod = &item;
        prod->updateStockItem(id, n, qtyArg);
    }
}

void make_report(std::string type)
{
    std::ifstream inFile("stock.txt");
    double total = 0.0;
    string arr[6];
    string line;
    while (getline(inFile, line))
    {
        if (line.length() < 1)
        {
            break;
        }
        istringstream iss(line);
        for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
        {
            string subs;
            iss >> subs;
            arr[i] = subs;
        }
        if (type == arr[0] && line.length() > 1 && stod(arr[3]) >= 0)
        {
            total += (stoi(arr[5])) * (stod(arr[3]));
            std::cout << setw(10) << arr[1] << "\t" << setw(10) << arr[2] << "\t" << setw(5) << arr[5]
                << " \t   " << setw(5) << arr[3] << "\n";
            arr[3] = "0";
        }
        else if (type == "All" && stod(arr[3]) > 0)
        {
            total += (stoi(arr[5])) * (stod(arr[3]));
            std::cout << setw(10) << arr[1] << "\t" << setw(10) << arr[2] << "\t" << setw(5) << arr[5]
                << " \t   " << setw(5) << arr[3] << "\n";
            arr[3] = "0";
        }
    }
    std::cout << "-------------------------------------------\n";
    std::cout << "\tTotal Sales for '" << type << "'  = " << total << "\n\n";
    inFile.close();
}

void view_sales_report()
{
    int ch;
    std::string type = "";
    std::cout << "\t1) CDs sales report\n";
    std::cout << "\t2) DVDs sales report\n";
    std::cout << "\t3) magazines sales report\n";
    std::cout << "\t4) books sales report\n";
    std::cout << "\t5) Total sales report\n";
    std::cout << "\n\t Select report number to make it, (1, 2, 3, 4, 5): ";
    std::cin >> ch;
    if (     ch == 1) type = "CD";
    else if (ch == 2) type = "DVD";
    else if (ch == 3) type = "Magazine";
    else if (ch == 4) type = "Book";
    else if (ch == 5) type = "All";

    std::cout << "\n\t+++++++++++++++++++++++++++++\n";
    std::cout << "\t|| Sales report for " << type << " ||\n";
    std::cout << "\t+++++++++++++++++++++++++++++\n\n";
    std::cout << "\tID\t   Title\tqtySold\t   Price\n";
    make_report(type);

}
