#include <iostream>
#include <cmath>
using namespace std;

double area=0;


double getArea(double a,double b,double c)
{
      //check if the three values are represent a triangle
    if(((a+b)>c && (a+c)>b) && (b+c)>a)
    {
        double s=(a+b+c)/2;  // half of perimeter
        area = sqrt(s*(s-a)*(s-b)*(s-c));
    }
    else
    {
        area = -1;
    }
    return area;

}
double getArea(double a)
{
    //equilateral triangle
    area= a*a*sqrt(3)/4;
    return area;
}
double getArea(double a,double b)
{
    //triangle with angle-90
    area= (a*b)/2;
    return area;
}

int main()
{
    double a, b, c;
    cout << "Enter the sides of triangle  a, b, c: " << endl;
    cin>> a >> b >> c ;
    cout<< getArea( a, b, c);

    return 0;
}
