#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float n , unitPrice , totalBill;
    cout<< "Enter electricity unit charges:";
    cin>>n;
    if(n <= 50)
    {
        unitPrice=0.50 ;
    }
    else if (n >50 && n<=100)
    {
        unitPrice=0.75 ;
    }
    else if (n >100 && n<=200)
    {
        unitPrice=1.20 ;
    }
    else if (n >200 && n<=250)
    {
        unitPrice=1.5 ;
    }

    totalBill = n * unitPrice * 1.2 ;

    cout<<"\nthe total Bill is : " << totalBill << endl;

    return 0;
}

