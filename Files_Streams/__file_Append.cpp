#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    string x;
    char ch='X';
    int j=77;
    double d=6.02;
    string str1="welcome ";
    string str2="Mr. ";
    cout<<"enter name\n";
    getline(cin,x);                //read string line and store in x

    ofstream myfile;
    myfile.open("fdata.txt"); // if file not found, the (open) will create it.
    myfile << endl << ch<<j<<'\t'<<d<<'\t'<<str1<<' '<<str2<<x;
    myfile.close();
    cout << "file written\n";

    //again
    myfile.open("fdata.txt",ios::out|ios::app);
    myfile << "\n new line \n";
    myfile.close();
    cout << "file written\n";

    return 0;
}
