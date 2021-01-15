#include <iostream>
using namespace std;

int main()
{
    int number_of_units ;
    float unit_price , total_bill;
    cout<< "Enter electricity unit charges:";
    cin>>number_of_units;
    if(number_of_units <= 50)
    {
        unit_price=0.50 ;
    }
    else if (number_of_units >50 && number_of_units<=100)
    {
        unit_price=0.75 ;
    }
    else if (number_of_units >100 && number_of_units<=200)
    {
        unit_price=1.20 ;
    }
    else if (number_of_units >200 && number_of_units<=250)
    {
        unit_price=1.5 ;
    }

    total_bill = number_of_units * unit_price * 1.2 ;

    cout<<endl;
    cout<<"Total Bill = " << total_bill << endl;

    return 0;
}

