#include <iostream>
#include <cmath>
using namespace std;

/*
Write an interactive program that computes the area of a rectangle (area=
base * height) or a triangle (area=0.5 * base * height) after prompting the
user to type the first character of the figure name (R or T). Your program must
display an error message to indicate that the user entered a character other
than R or T.
*/
int main()
{
    char shape ;
    double base, height, area, perimeter ;

    cout << "enter the first letter of a geometric shape :" << endl;
    cin >> shape;

    switch(shape){
    case 'R':
        cout << "enter the Base and Height for Rectangle:" << endl;
        cin >> base >> height ;
        area = base * height ;
        cout << "rectangle area = "<< area  << endl;
        break;
    case 'T':
        cout << "enter the Base and Height for triangle:" << endl;
        cin >> base >> height ;
        area = 0.5 * base * height ;
        cout << "triangle area = "<< area  << endl;
        break;
    default:
        cout << "Error !\n";
        cout << "Don't enter a character other than R, T .!\n" << endl;
    }
    return 0;
}
