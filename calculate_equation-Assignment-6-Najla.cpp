
#include <iostream>
#include <cmath>

using namespace std;

float calculate_equation(int x)
{
    float y ;
    if (x > 0)
    {
        y = sqrt(3*x - 5)/(2*x) ;
    }
    else
        y = 2*x + 15 ;
    return y;
}

int main()
{
    int x ;
    cout << "\nEnter a positive value for x: " ;
    cin>>x;
    cout<<"The result is: "<< calculate_equation(x) ;

    cout << "\nEnter a negative value for x: " ;
    cin>>x;
    cout<<"The result is: "<< calculate_equation(x) ;
    cout <<endl;
    return 0;
}

