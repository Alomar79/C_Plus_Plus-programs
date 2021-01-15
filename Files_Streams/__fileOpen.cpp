#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    /*string x;
    char ch='X';
    int j=77;
    double d=6.02;
    string str1="welcome ";
    string str2="Mr. ";
    cout<<"enter name\n";
    getline(cin,x);                //read string

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
    */

    char ch='X';
    int j=77;
    double d=6.02;
    string str1="Computer";
    string str2="Programming";
    ofstream outfile;
    outfile.open("fdata1.txt");
    outfile << endl << ch<<'\t'<<j<<'\t'<<d<<'\t'<<str1<<' '<<str2;
    outfile.close();
    cout << "file written\n";

    return 0;
}
