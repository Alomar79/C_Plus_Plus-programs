#include <iostream>
#include <ctime>

using namespace std;


int main()
{
    int birthYear, age;
    cout << "Enter birth y!" << endl;
    cin>>birthYear;

    time_t now = time(0);
    tm *ltm = localtime(&now);

    age = 1900 + ltm->tm_year - birthYear;
    cout << "Age : " <<age << endl;

    /*

    cout << "Year:" << 1900 + ltm->tm_year << endl;
    cout << "Month: "<< 1 + ltm->tm_mon<< endl;
    cout << "Day: "<<  ltm->tm_mday << endl;
    cout << "Time: "<< 1 + ltm->tm_hour << ":";
    cout << 1 + ltm->tm_min << ":";
    cout << 1 + ltm->tm_sec << endl;

    cout <<""<< endl;
    */

    return 0;
}
