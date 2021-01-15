#include "CD.h"
#include <sstream>
#include <string>
CD::CD():Product()
{
    this->artist = "";
    this->truck_count = 0;
    this->play_time = 0;
    this->genre = "";
}
CD::CD(string type, int id, string title, double cost, int qty,
    int qtySold, string artist, int truck_count, double play_time, string genre)
    :Product("CD", id, title, cost, qty, qtySold)
{
    this->artist = artist;
    this->truck_count = truck_count;
    this->play_time = play_time;
    this->genre = genre;
}

void CD::writeNewProduct()
{
    int id = 0;
    cout << "Enter item id : ";
    cin >> id;

    bool found = false;
    ifstream inFile("stock.txt");
    string arr[10];
    string line;
    while (getline(inFile, line))
    {
        if (line.length()<1)
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
        string type = "CD";
        string title, artist, genre;
        int qty, qtySold, truck_count;
        double cost, play_time;
        cout << "Enter item title : ";
        cin >> title;
        cout << "Enter item cost : ";
        cin >> cost;
        cout << "Enter item Qty : ";
        cin >> qty;
        cout << "Enter item Qty Sold : ";
        cin >> qtySold;
        //=====================
        cout << "Enter artist : ";
        cin >> artist;
        cout << "Enter number of tracks : ";
        cin >> truck_count;
        cout << "Enter playing time for CD: ";
        cin >> play_time;
        cout << "Enter genre : ";
        cin >> genre;

        ofstream outFile;
        outFile.open("stock.txt", std::ios::out | std::ios::app);

        outFile << type << "\t" <<id<< "\t" << title << "\t" <<cost << "\t" << qty << "\t" << qtySold
            <<"\t"<<artist<<"\t" << truck_count<<"\t"<< play_time << "\t"<< genre <<"\n";

        outFile.close();
        cout << "\nProduct '" << title<< "' written successfully!\n\n";
    }
}

void CD::updateStockItem(int id, int n, std::string qty_arg)
{
    bool found = false;
    ifstream inFile("stock.txt");
    ofstream tempFile("temp.txt");
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
        if (id != stoi(arr[1]) && line.length() >1)
            tempFile << line<<"\n";
        else if (id == stoi(arr[1])  && line.length() > 1)
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
                << "\t" << arr[6] << "\t" << arr[7] << "\t" << arr[8] << "\t" << arr[9] << "\n";

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

