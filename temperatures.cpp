#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    double C=0.0, F=0.0 ,K=0.0, R=0.0 ;
    string s = "  Celsius\tFahrenheit\tKelvin\tRankine\n";
    ofstream oFile ;
    oFile.open("temperatures.txt");
    cout<< s<< endl;
    oFile <<s << endl;
    while(C <=100){
        F = 1.8*C + 32 ;
        K = C + 273.15 ;
        R=1.8*K;
        cout<<"\t"<<C<<"\t\t"<<F<<"\t"<<K<<"\t"<<R<<"\n";
        oFile<<"\t"<<C<<"\t\t"<<F<<"\t"<<K<<"\t"<<R<<"\n";
        C += 5;
    }
    oFile.close();


    return 0;
}
