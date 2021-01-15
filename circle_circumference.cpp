#include <iostream>

using namespace std;

int main()
{
    const double  pi=3.14;
    double area, circumference, r;
    cout << "Enter the radius" << endl;
    cin>> r;
    circumference=2*r*pi;
    if(r>=1.0){
        area= r*r*pi;
        cout<< "Area = "<<area<<endl;
        cout<< "Circumference = "<<circumference<<endl;
    }
    else{
        cout<< "Circumference = "<<circumference<<endl;
    }

    return 0;
}
