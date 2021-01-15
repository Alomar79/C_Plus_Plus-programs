
#include <iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;
string covid[1000][6];

void readFile() {


    ifstream infile;
    int count;
    string temp;
    infile.open("covid19_informations.txt");

    if (!infile)
    {
        cout << "file not found";
    }
    else
    {
        int i = 0;
        while (!infile.eof()) {
            infile >> covid[i][0] >> covid[i][1] >> covid[i][2] >> covid[i][3] >> covid[i][4] >> covid[i][5];
            i++;

        }
        infile.close();



    }
}



void saveFile() {

    ifstream infile;

    infile.open("covid19_informations.txt");
    string temp;
    int j = 0;
    while (!infile.eof())
    {
        getline(infile, temp);
        j++;
    }

    infile.close();


    ofstream outfile;
    outfile.open("covid19_informations.txt");

    for (int i = 0; i <= j; i++)
        if (covid[i][0] != "-1" && covid[i][0] != "0")
            outfile << "\n" << left << setw(8) << covid[i][0] << left << setw(10) << covid[i][1] <<
            left << setw(12) << covid[i][2] << left << setw(8) << covid[i][3] << left << setw(8) << covid[i][4] << left << setw(8) << covid[i][5];

    outfile.close();

}



int search(int countryCode) {

    for (int i = 0; i <= 1000; i++)
    {


        if (covid[i][0] == to_string(countryCode))
            return i;


    }
    return -1;
}
int search_Name(string  countryName) {

    for (int i = 0; i <= 1000; i++)
    {


        if (covid[i][1] == countryName)
            return i;


    }
    return -1;
}
void updateCountryRecord(int casses) {
    int ans;
    do {
        cout << "do you want to update new casses PRESS 1 if you want to update death casses PRESS 2?";
        cin >> ans;
    } while (ans != 1 && ans != 2);

    readFile();


    int found = search(casses);

    if (ans == 1 && found != -1)
    {
        int newcassess;
        cout << "please enter number for new casses ";
        cin >> newcassess;

        covid[found][2] = to_string(stoi(covid[found][2]) + newcassess);
        covid[found][3] = to_string(newcassess);
        cout << endl;

    }
    else if (ans == 2 && found != -1)
    {
        int new_death;
        cout << "please enter number for new death ";
        cin >> new_death;
        covid[found][4] = to_string(stoi(covid[found][4]) + new_death);
        covid[found][5] = to_string(new_death);
        cout << "endl";

    }
    else
        cout << "this code is not available " << endl;

    saveFile();

}



void delet(int code)
{
    readFile();
    int index = search(code);

    if (index == -1)
        cout << "wrong code was entered" << endl;
    else
    {
        covid[index][0] = "-1";
        saveFile();

    }

}


void Classification() {
    ifstream in;
    ofstream out;
    int country_code;
    string country;
    int total_cases;
    int New_cases;
    int deaths;
    int new_deaths;
    in.open("covid19_informations.txt"); // Open File for reading
    out.open("classifications.txt"); // Open File
    cout << "\n\nCOVID’19 Classification System\n\n";
    string zone[1000]; // Array Initialize
    int i = 0;
    while (in >> country_code >> country >> total_cases >> New_cases >> deaths >> new_deaths && in.ignore())// Reading from file and applying loop
    {
        if (New_cases >= 50000 && new_deaths >= 800) // Applying the logic for RED, Green and Yellow
        {
            zone[i] = "Red";    // Checking condition for red zone
        }
        else if (New_cases > 5000 && new_deaths < 800 && New_cases <= 5000 && new_deaths>70) {
            zone[i] = "Yellow"; // Checking condition for yellow zone
        }
        else {
            zone[i] = "Green";  // Checking condition for green zone
        }

        cout << setw(6) << country_code << setw(20) << country << setw(20) << zone[i] << endl;// Displyaing Data
        out << country_code << " " << country << " " << zone[i] << " " << endl; // Writing in new File
        i++;
    }
    in.close(); //Covid File Close
    out.close(); // Classification File Close
}
void menu() {
    cout << "COVID’19 tracking System \n";
    cout << "[1] Add a record of a new country \n";
    cout << "[2] List the information of all countries\n";
    cout << "[3] Search for a specific country \n";
    cout << "[4] Display a report of all countries with total\n";
    cout << "[8] Exit \n";
    cout << "Enter your choice: \n";


}


int addnewCuntry(int country_code) {

    int option, totalCases, newCases, death, newDeath, count = 0;
    string name, temp;

    int cases;
    int found = 0;
    ofstream outfile;

    int countriesNum = 0;
    readFile();

    cout << "Add a record of a new country: \n";
    cout << "================================\n";
    cout << "Enter country name: ";
    cin >> name;
    int x = search_Name(name);
    if (x == -1) {
        cout << "Enter total cases: ";
        cin >> totalCases;
        cout << "Enter number of New cases : ";
        cin >> newCases;
        cout << "Enter number of deaths: ";
        cin >> death;
        cout << "Enter number of new deaths:  ";
        cin >> newDeath;
        count = country_code + 1;
        outfile.open("covid19_informations.txt", ios::app);

        outfile << endl << left << setw(8) << count << left << setw(10) << name <<
            left << setw(12) << totalCases << left << setw(8) << newCases << left << setw(8) << death << left << setw(8) << newDeath;
        countriesNum++;
        outfile.close();

        cout << ".....You made a valid country record, and record is saved. \n";


        return countriesNum;
    }
    else {
        cout << "country Found " << endl;
    }


}


void print() {
    ifstream infile;
    string  temp;

    infile.open("covid19_informations.txt");
    cout << "Code  Country  Total Cases  New cases  Deaths  New Deaths\n";

    if (!infile)
    {
        cout << "file not found";
    }
    else
    {
        while (!infile.eof()) {

            getline(infile, temp);
            cout << temp << endl;
        }

        infile.close();
    }


}




void searchCountry()
{

    int countryChoosed;
    string temp;
    ifstream infile;
    int count;

    cout << " please enter the country code that you want to Display \n";
    cin >> countryChoosed;

    infile.open("covid19_informations.txt");

    if (!infile)
    {
        cout << "file not found";
    }
    else
    {
        int found = 0;
        while (!infile.eof())
        {

            infile >> count;
            getline(infile, temp);
            if (count == countryChoosed)
            {
                cout << "Code  Country  Total Cases  New cases  Deaths  New Deaths\n";
                cout << count << temp << "\n";
                found++;
                break;
            }
        }
        if (found == 0)
            cout << "SORRY this code is incorrect" << endl;

        infile.close();
    }



}


void comaprison()
{
    int cases;
    int count;
    int  totalCases;
    ifstream infile;
    string name, temp;
    int found = 0;
    cout << " enter a total cases value,country records that has total cases higher will be displayed \n ";

    cin >> cases;


    infile.open("covid19_informations.txt");

    if (!infile)
    {
        cout << "file not found";
    }
    else
    {

        while (!infile.eof()) {

            infile >> count;
            infile >> name;
            infile >> totalCases;
            getline(infile, temp);
            if (cases <= totalCases)
            {
                if (found == 0)
                    cout << "Code  Country  Total Cases  New cases  Deaths  New Deaths\n";

                cout << left << setw(8) << count << left << setw(10) << name << left << setw(8) << totalCases << left << setw(12) << temp << "\n";

                found = 1;
            }
        }
        infile.close();

        if (found == 0)
            cout << " no records found have total casses more than " << cases << " \n";
        else
            found = 0;

    }



}



int main()
{
    int option;
    ifstream infile;
    string temp;
    ofstream outfile;

    int countriesNum = 0;
    infile.open("covid19_informations.txt");


    if (infile)
    {
        while (!infile.eof()) {

            getline(infile, temp);
            countriesNum++;

        }

        infile.close();
    }



    menu();
    cin >> option;


    while (option != 8)
    {

        switch (option)
        {

        case 1:
            addnewCuntry(countriesNum++);
            break;



        case 2:
            print();
            break;



        case 3:
            searchCountry();
            break;


        case 4:

            comaprison();


            break;


        case 5:
            int contrycode;
            cout << "please enter contry code you want to  be updated";
            cin >> contrycode;
            updateCountryRecord(contrycode);
            break;


        case 6:
            int contrycode2;
            cout << "please enter contry code you want to  delete";
            cin >> contrycode2;
            delet(contrycode2);
            break;



        case 7:
            Classification();
                break;



        case 8:
            break;




        default:
            cout << "wrong option choose from the menu \n";
            break;






        }


        menu();
        cin >> option;





    }


    cout << "Bye, see you again later!\n";

}
