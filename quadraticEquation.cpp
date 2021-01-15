#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a ,b ,c ,d;
    cout << "Enter a,b,c for quadratic equation" << endl;
    cin>>a>>b>>c;
    d=pow(b,2)-4*a*c;
    if(d>=0){
        double x1 = (-b-sqrt(d))/(2*a);
        double x2 = (-b+sqrt(d))/(2*a);

        cout <<"x1 = "<< x1 << "\n" << "x2 = " << x2 ;
    }
    else
        cout << " impossible to solve !" ;


    return 0;
}
