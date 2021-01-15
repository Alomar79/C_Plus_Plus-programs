#include <iostream>

using namespace std;

int main()
{
    int amount , f500=0 , f100=0 , f50=0 , f10=0 , f5=0 , f1=0;
    //cout << "Enter Amount of QARs you need" << endl;
    //cin>> amount ;
    int x=1;
    while(x > 0 && x<=100) {
        amount =x;
        if(amount >500){
            f500=amount / 500 ;
            amount = amount - 500*f500 ;
        }
        else if(amount > 100){
            f100=amount / 100 ;
            amount = amount - 100*f100 ;
        }
        else if(amount > 50){
            f50=amount / 50 ;
            amount = amount - 50*f50 ;
        }
        else if(amount > 10){
            f10=amount / 10 ;
            amount = amount - 10*f10 ;
        }
        else if(amount > 5){
            f5=amount / 5 ;
            amount = amount - 5*f5 ;
        }
        else if(amount > 1){
            f1=amount / 1;
            amount = amount - 1*f1 ;
        }

        cout << "amount "<<x<<" = "<<f500<<"(500) , "<<f100<<"(100) , "<<f50<<"(50) , "<<f10<<"(10) , "<<f5<<"(5) , "<<f1<<"(1)\n" ;
        x+=1;

    }
    return 0;
}
