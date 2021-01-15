#include <fstream>
#include <iostream>
//#include <string>
using namespace std;
int main()
{
    char ch;
    int j;
    double d;
    string str1, str2;
    ifstream infile;
    infile.open("fdata.txt");
    if(infile)    //if(!infile.fail())
        infile >> ch >> j >> d >> str1 >> str2;
    cout << ch<<" "<<j<<" "<<d<<" "<<str1<<" "<<str2<<endl;
    infile.close();
    return 0;
}
