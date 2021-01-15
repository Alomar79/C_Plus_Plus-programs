#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int year;
    bool divisibleBy4, divisibleBy100, divisibleBy400, leap;
    cout<<"enter year please ";
    cin>>year;
    divisibleBy4 = (year%4==0);
    divisibleBy100 = (year%100==0);
    divisibleBy400 = (year%400==0);
    leap = (divisibleBy4 && !divisibleBy100)||(divisibleBy400 && divisibleBy100);
    int daysInFebraury = leap? 29 : 28 ;
    cout << daysInFebraury;
    /* if(leap)
        cout<<year<<" is leap"<<endl;
    else
        cout<<year<<" is not leap"<<endl;
    return 0; */
}
