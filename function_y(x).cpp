#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x , y;
    cout << "Enter The Value of 'X' :" << endl;
    cin >> x ;
    y= x > 0 ? x+1 : pow(x,2) + 2*x + 10 ;

    /* (if else)
     *
     * if(x>0) y= x+1;
     * else y=  pow(x,2) + 2*x + 10 ;
     */

    cout << y ;

    return 0;
}
