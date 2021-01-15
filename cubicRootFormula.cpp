#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x ,tolerance , a;
    cout << "Enter a " << endl;
    cin>>a;
    x=abs(a/3);
    cout<<x;
    tolerance = abs(a)*pow(10,-6);
    while(abs(x*x*x-a)>tolerance){
        x = (1/3)*(2*x + a/(x*x));
    }
    cout<<"\n"<<x;
    return 0;
}
