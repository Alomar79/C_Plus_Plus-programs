#include<iostream>
using namespace std;
int main()
{
    int i, amt,QR500,QR100,QR50,QR10,QR5,QR1;
    cout<<"Enter amount : ";
    cin>>amt;
    QR500=amt/500;
    amt=amt%500;
    QR100=amt/100;
    amt=amt%100;
    QR50=amt/50;
    amt=amt%50;
    QR10=amt/10;
    amt=amt%10;
    QR5=amt/5;
    amt=amt%5;
    QR1=amt;
    cout<<QR500<<": QR.500 \t "<<QR100<<": QR.100 \t "<<QR50<<": QR.50 \t "
        <<QR10<<": QR.10 \t "<<QR5<<": QR.5 \t "<<QR1<<": QR.1 "<<endl;
    return 0;
}
