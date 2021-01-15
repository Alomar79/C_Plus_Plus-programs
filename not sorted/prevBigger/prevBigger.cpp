#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x;
    int bigger = 0 , prevBigger = 0 ;
    ifstream infile;
    infile.open("textFile.txt");
    while( ! infile.eof())
    {
        infile >> x ;
        if( x > bigger )
        {
            prevBigger = bigger ;
            bigger = x ;
        }
    }
    cout<<"The second maximum number in the file is: "<<prevBigger <<"\n";
    return 0;
}
