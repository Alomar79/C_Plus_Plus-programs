#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int d ;
    double v , a;
    cout << "Enter a , v : " << endl;
    cin>>v>>a;
    double t=0.0 ;
    while(t<=15){
        d = v*t + 0.5*a*pow(t,2);
        cout<<"d(t:"<<t<<"\t) = "<<d <<endl;
        t +=0.5;
    }
    return 0;
}
