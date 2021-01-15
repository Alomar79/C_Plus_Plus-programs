#include <iostream>

using namespace std;

void mySwap(int& , int& );

int main()
{
    int x=10, y=20;
    cout <<"Before: x = " << x << " and y= " <<y << endl;
    mySwap(x, y);
    //After calling the swap() function: x=20 and y=10
    cout <<"After : x = " << x << " and y= " <<y << endl;
    return 0;
}
void mySwap(int& a, int& b){
    int m;
    m=a;
    a=b;
    b=m;
}
