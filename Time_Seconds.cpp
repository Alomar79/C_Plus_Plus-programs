#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;


int main()
{
    int seconds, H=0 , M=0 , S;
    cout << "Enter time in Seconds!" << endl;
    cin>>seconds;
    /*
    if(x>=3600){
        H=x/3600;
        M=(x-H*3600)/60;
        S=(x-H*3600-M*60);
    }
    else if(x<3600 && x>=60){
        H=0;
        M=x/60;
        S=(x-60*M);
    }
    else if(x<60){
        H=0;
        M=0;
        S=x;
    }
    */
    H = seconds/3600;
    seconds = seconds % 3600;
    M = seconds/60;
    seconds=seconds%60;
    S=seconds;


    cout <<"Time "<<H<<":"<<M<<":"<<S<< endl;
    cout <<"sin(30) = " << sin(30*PI/180);
    return 0;
}
