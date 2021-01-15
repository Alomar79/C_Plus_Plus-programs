#include <iostream>

using namespace std;
//driver program

//prototype
double feetToMeters(double);

int main()
{
    double fts;
    cout << "enter feets : " << endl;
    cin >>fts;
    double m = feetToMeters(fts);
    cout<<"\n"<<m <<" meters" ;


    return 0;
}
//function
double feetToMeters(double feets){
    double meters;
    if(feets>0)
        meters=feets*0.3048 ;
    else
        meters=0;

    return meters;

}
