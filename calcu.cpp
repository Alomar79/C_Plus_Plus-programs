#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c,x1,x2 , D;
    cout<<"Enter A ,B , C ";
    cout<<"to be as Quadratic equation:\n";
    cin>>a>>b>>c ;

    if(b*b >= 4*a*c){
        D = b*b - 4*a*c;
        x1=(-b-sqrt(D))/(2*a);
        x2=(-b+sqrt(D))/(2*a);
        cout << "\n";
        cout <<" X1 = "<<x1<<"\n";
        cout <<" X2 = "<<x2<<"\n";
    }
    else{
        cout <<"\nthe roots are complex!\n";
    }
    return 0;
}
