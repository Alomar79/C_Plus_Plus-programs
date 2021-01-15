#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    double x, y, sum=0;
    cout<<"Enter five floating numbers\n";
    ofstream ofile ;
    ofile.open("rr.txt");
    int i=1;
    while(i<=5){
        cin>>x ;
        ofile <<" "<< x ;
        i++;
    }
    ofile.close();
    ifstream ifile;
    ifile.open("rr.txt");
    while(!ifile.eof()){
        ifile >> y;

        sum += y;
        cout<<y<<" ";

    }
    cout<<"\nSum = "<<sum ;
    ifile.close();

    return 0;
}
