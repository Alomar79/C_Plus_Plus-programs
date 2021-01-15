#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a1,a2,b1,b2,c1,c2,   d1,d2, x,y;
    cout<<"Enter (a1, b1 , c1) ,   (a2, a2, c2) to be as 2 linear equations :  "<<endl;
    cin>>a1>>b1>>c1>>a2>>b2>>c2 ;

    d1 = b2-a2*b1/a1;
    d2=c2-a2*c1/a1;

    y=d2/d1;
    x=(c1-b1*y)/a1;

    cout<<" Solution is : \n";
    cout<<"=====================\n";
    cout<< "X = " << x <<endl;
    cout<< "Y = " << y <<endl;
    cout<<"=====================\n";


    cout << "Hello world!" << endl;
    return 0;
}
