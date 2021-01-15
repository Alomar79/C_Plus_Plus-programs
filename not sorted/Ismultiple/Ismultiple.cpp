#include <iostream>

using namespace std;
int GetNumber(int , int );
int Ismultiple(int  , int );
int main()
{
    int N , m ;
    N = GetNumber(20 , 100 );
    m = GetNumber(2 , 5 );
    cout << "All the numbers from 1 to "<< N <<"that are multiples of "<<m<<" are : \n";
    for(int x=1 ; x<=N; x++)
    {
        if(Ismultiple(x  , m ) > 0)
        {
            cout <<" , "<< Ismultiple(x  , m ) ;
        }
    }
    return 0;
}
int GetNumber(int L1 , int L2)
{
    int y ;
    cout<<"Please enter a number between "<< L1<<" and "<<L2<<" :  ";
    cin>> y ;
    while(y<L1 || y>L2)
    {
        cout<<"Please enter a valid number! The number should be between "<< L1<<" and "<<L2<<" :  ";
        cin>> y ;
    }
    return y;

}

int Ismultiple(int x , int m)
{
    int output = 0 ;
    if(x % m == 0)
        output = x;
    return output;
}
