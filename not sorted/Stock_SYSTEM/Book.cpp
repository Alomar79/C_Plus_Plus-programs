#include "Book.h"
#include <sstream>
#include <string>

Book::Book():Product()
{
    this->ISDN = "";
}
Book::Book(string type, int id, string title, double cost, int qty, int qtySold,
    string ISDN) : Product("Book", id, title, cost, qty, qtySold)
{
    this->ISDN = ISDN;
}

void Book::writeNewProduct()
{
    long int id;
    cout << "Enter item id : ";
    cin >> id;

    bool found = false;
    //string pType = " ";
    ifstream inFile("stock.txt");
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

        if (to_string(id) == arr[1])
        {
            cout << "\n\tThe Product with id '" << id << "' is found already!\n";
            found = true;
            break;
        }
    }
    inFile.close();

    if (found == false)
    {
        string type = "Book";
        string title, ISDN;
        int qty, qtySold;
        double cost;

        cout << "Enter item title : ";
        cin >> title;
        cout << "Enter item cost : ";
        cin >> cost;
        cout << "Enter item Qty : ";
        cin >> qty;
        cout << "Enter item Qty Sold : ";
        cin >> qtySold;
        //=====================
        cout << "Enter ISDN : ";
        cin >> ISDN;


        ofstream outFile;
        outFile.open("stock.txt", std::ios::out | std::ios::app);

        outFile << type << "\t" << id << "\t" << title << "\t" << cost << "\t" << qty << "\t" << qtySold
            << "\t" << ISDN << "\n";

        outFile.close();
        cout << "\nProduct '" << title << "' written successfully!\n\n";
    }
}

void Book::updateStockItem(int id, int n, std::string qty_arg)
{
    bool found = false;
    ifstream inFile("stock.txt");
    std::ofstream tempFile("temp.txt");
    string arr[10];
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
        if (to_string(id) != arr[1] && line.length() > 1)
            tempFile << line << "\n";
        else if (to_string(id) == arr[1] && line.length() > 1)
        {
            int x = stoi(arr[4]);
            int y = stoi(arr[5]);
            found = true;
            if (qty_arg == "qty")
            {
                x += n;
                arr[4] = to_string(x);
            }
            else if (qty_arg == "qtySold")
            {
                x -= n;
                y += n;
                arr[4] = to_string(x);
                arr[5] = to_string(y);
            }
            tempFile << arr[0] << "\t" << arr[1] << "\t" << arr[2] << "\t" << arr[3] << "\t" << arr[4] << "\t" << arr[5]
                << "\t" << arr[6] << "\n";

        }
    }
    inFile.close();
    tempFile.close();

    //======================================

    if (found == true)
    {
        remove("stock.txt");
        int c = rename("temp.txt", "stock.txt");
    }
    else
    {
        std::cout << "\nThe item which has id '" << id << "' not found\n";
        remove("temp.txt");
    }
}

