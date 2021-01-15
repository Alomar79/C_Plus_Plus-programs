#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    string x; //a string to hold one line of text.
    ifstream infile("temperatures.txt");
    while (!infile.eof())
    {
        //getline(infile,x); //read a line and store it in x.
        infile>>x;

        cout << x <<endl;
    }
    return 0;
}
