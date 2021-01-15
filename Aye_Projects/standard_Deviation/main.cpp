#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double mean_value(double[ ], int);
double standard_deviation(double[], double , int );

int main()
{
    int N = 5 ;
    double x[N] ;
    double mean , stDev;

    for(int i = 0; i< N; i++)
    {
        cout <<"Enter Value "<<i+1<<" : ";
        cin >> x[i] ;
    }
    mean = mean_value(x , N);
    stDev = standard_deviation(x , mean, N);

    cout << "The mean is: " << mean << endl;
    cout<< fixed << showpoint << setprecision(4);
    cout << "standard deviation is: " << stDev << endl;
    return 0;
}
double mean_value(double x[ ], int size)
{
    double sum=0 ;
    for( int i=0; i<size ; i++)
    {
        sum += x[i];
    }
    return sum / (float)size;
}

double standard_deviation(double x[], double mean, int size)
{
    double st_dev , y = 0 ;
    for( int i=0; i<size ; i++)
    {
        y = y + pow((x[i] - mean),2) ;
    }

    st_dev = sqrt(y/size);
    return st_dev;
}
