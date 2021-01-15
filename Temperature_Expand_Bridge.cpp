#include <iostream>
#include <cmath>
#include <iomanip>
#include <ios>


using namespace std;

int main()
{
    int c=5, t0=0 ;
    double a, dL=0.0, L=7365.0 , length;
    a=11.7*pow(10,-6);
    cout << "Temps \t Length" << endl;
    while(c<=50){
        if(c==0)
            cout<<setw(5)<< c <<"\t"<<fixed<<setprecision(4)<<length <<"\n" ;
        else{
            dL = a*L*(c-t0);
            length = dL+L;
            cout<<setw(5)<< c <<"\t"<<fixed<<setprecision(4)<<length <<"\n" ;
            c +=5;
            L=L+dL;
            t0=t0+5;
        }
    }
    return 0;
}
