#include <iostream>

using namespace std;

int main()
{
    int c;
    const int  water = 100 , Mercury=357 , Copper=1187, Silver=2193, Gold=2660;
    cout << "Enter boiling point of a substance " << endl;
    cin >> c ;
    if(c>water*0.95 && c<water*1.05)
        cout<<"substance is water";
    else if(c>Mercury*0.95 && c<Mercury*1.05)
        cout<<"substance is Mercury";
    else if(c>Copper*0.95 && c<Copper*1.05)
        cout<<"substance is Copper";
    else if(c>Silver*0.95 && c<Silver*1.05)
        cout<<"substance is Silver";
    else if(c>Gold*0.95 && c<Gold*1.05)
        cout<<"substance is Gold";
    else
        cout<<"unknown substance !";
    return 0;
}
