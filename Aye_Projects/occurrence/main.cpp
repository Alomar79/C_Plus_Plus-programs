#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double occurrence (double[ ],int , double );
int main()
{
    int occ , x ;
    const int N = 5 ;
    double nums[N] ;
    //double mean , stDev;

    for(int i = 0; i< N; i++)
    {
        cout <<"Enter Value "<<i+1<<" : ";
        cin >> nums[i] ;
    }
    cout <<"Enter a number to find its occurrence: ";
    cin >> x ;
    occ = occurrence(nums , N , x);

    cout << "The occurrence of "<<x <<" is "<< occ << endl;
    return 0;
}

double occurrence (double numbers[ ],int size, double x)
{
    int occurrance = 0 ;
    for( int i=0; i<size ; i++)
    {
        if(numbers[i] == x)
            occurrance += 1;
    }
    return occurrance;
}
