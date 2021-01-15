#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double pi = 3.14159;
    char shape ;
    double base, height, area, perimeter,circumference, radius ;

    cout << "enter the first letter of a geometric shape!" << endl;
    cin >> shape;
    shape = toupper(shape);

    switch(shape){
    case 'R':
        cout << "enter the Base and Height for Rectangle!" << endl;
        cin >> base >> height ;
        area = base * height ;
        perimeter = 2*(base + height) ;
        cout << "rectangle area = "<< area  << endl;
        cout << "rectangle perimeter = "<< perimeter  << endl;
        break;
    case 'C':
        cout << "enter the radius of Circle!" << endl;
        cin >> radius ;
        area = pi * pow(radius , 2);
        circumference = 2*pi*radius ;
        cout << "Circle area = "<< area  << endl;
        cout << "Circle circumference= "<< circumference << endl;
        break;
    default:
        cout << "Error !\n" << "Dont enter a character other than R, r, C or c .!\n" << endl;
    }
    return 0;
}
