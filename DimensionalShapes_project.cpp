#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;
void displayMainMenu()
{
    cout <<"||+++++++++++++++++++++++++++++++++++++++++||"<< endl;
    cout << "\t\t 2-D & 3-D Shapes System" << endl;
    cout << "Select a shape or Exit:" << endl;
    cout << "[1] Square \n";
    cout << "[2] Rectangle \n";
    cout << "[3] Triangle \n";
    cout << "[4] Circle \n";
    cout << "[5] Cube \n";
    cout << "[6] Sphere \n";
    cout << "[7] Exit \n";
}

// Display sub menu which takes 2 string arguments: shape,
// and arg(perimeter or Diameter)
void display_SubMenu(string shape , string arg)
{
    cout << "\n \t\t 2-D & 3-D Shapes System" << endl;
    cout << "You selected " << shape<<", what would you like to do:" << endl;
    cout << "[1] Calculate Area"<< endl;
    cout << "[2] Calculate "<<arg<< endl;
    cout << "[3] Exit"<< endl;
}

int read_subChoice()
{
    int subChoice;
    cout << "\t Enter your choice from the menu list: ";
    cin>> subChoice;
    while(subChoice < 1 || subChoice > 3)
    {
        cout << "\t Enter your choice from the menu list(1 to 3): ";
        cin>> subChoice;
    }
    return subChoice;
}

float squareArea()
{
    // initialize variable with -ve value to force entry into the loop
    float side = -1;
    cout<<"\nYou want to calculate the Area of a Square";
    while(side < 0)
    {
        cout<<"\nEnter the Square's side: ";
        cin>> side;
    }
    return pow(side,2);
}

float squarePerimeter()
{
    // initialize variable with -ve value to force entry into the loop
    float side = -1;
    cout<<"\nYou want to calculate the Perimeter of a Square";
    while(side < 0)
    {
        cout<<"\nEnter the Square's side: ";
        cin>> side;
    }
    return 4*side;
}

float rectangleArea()
{
    // initialize variables with -ve values to force entry into the loop
    float length = -1, width = -1;
    cout<<"\nYou want to calculate the Area of a Rectangle";
    while(length <0)
    {
        cout<<"\nEnter the Rectangle's Length: ";
        cin>> length;
    }
    while(width <0)
    {
        cout<<"\nEnter the Rectangle's Width: ";
        cin>> width;
    }
    return length*width;
}

float rectanglePerimeter()
{
    // initialize variables with -ve values to force entry into the loop
    float length = -1, width = -1;
    cout<<"\nYou want to calculate the Perimeter of a Rectangle";
    while(length <0)
    {
        cout<<"\nEnter the Rectangle's Length: ";
        cin>> length;
    }
    while(width <0)
    {
        cout<<"\nEnter the Rectangle's Width: ";
        cin>> width;
    }
    return 2*(length + width);
}

float triangleArea()
{
    // initialize variables with -ve values to force entry into the loop
    float base = -1, height= -1;
    cout<<"\nYou want to calculate the Area of a Triangle";
    while(base <0)
    {
        cout<<"\nEnter the Triangle's Base: ";
        cin>> base;
    }
    while(height <0)
    {
        cout<<"Enter the Triangle's Height : ";
        cin>> height;
    }
    return base*height/2;
}

float trianglePerimeter()
{
    // Assuming Scalene triangle
    // initialize variables with -ve values to force entry into the loop
    float side1 = -1, side2 = -1, side3 = -1;
    cout<<"\nYou want to calculate the Perimeter of a Triangle";
    while(side1 <0)
    {
        cout<<"\nEnter the Triangle's side1 : ";
        cin>> side1;
    }
    while(side2 <0)
    {
        cout<<"Enter the Triangle's side2 : ";
        cin>> side2;
    }
    while(side3 <0)
    {
        cout<<"Enter the Triangle's side3 : ";
        cin>> side3;
    }
    return side1 + side2 + side3;
}

float circleArea()
{
    const float PI = 3.14159;
    // initialize radius variable with -ve value to force entry into the loop
    float radius = -1;
    cout<<"\nYou want to calculate the Area of a Circle";
    while(radius <0)
    {
        cout<<"\nEnter the Radius : ";
        cin>> radius;
    }
    return PI*pow(radius,2);
}
float circleCircumference()
{
    const float PI = 3.14159;
    // initialize radius variable with -ve value to force entry into the loop
    float radius = -1;
    cout<<"\nYou want to calculate the Circumference of a Circle";
    while(radius <0)
    {
        cout<<"\nEnter the Radius : ";
        cin>> radius;
    }
    return 2*PI*radius;
}

float cubeArea()
{
    // initialize side variable with -ve value to force entry into the loop
    float side = -1;
    cout<<"\nYou want to calculate the Area of a Cube";
    while(side <0)
    {
        cout<<"\nEnter the side of Cube : ";
        cin>> side;
    }
    //assuming regular Cube
    return 6*pow(side,2);
}

float cubeVolume()
{
    // initialize side variable with -ve value to force entry into the loop
    float side = -1;
    cout<<"\nYou want to calculate the Volume of a Cube";
    while(side <0)
    {
        cout<<"\nEnter the side of Cube : ";
        cin>> side;
    }
    //assuming regular Cube
    return pow(side,3);
}

float sphereArea()
{
    const float PI = 3.14159;
    // initialize radius variable with -ve value to force entry into the loop
    float radius = -1;
    cout<<"\nYou want to calculate the Area of a Sphere";
    while(radius <0)
    {
        cout<<"\nEnter the radius of Sphere : ";
        cin>> radius;
    }
    return 4*PI*pow(radius,2);
}

float sphereVolume()
{
    const float PI = 3.14159;
    // initialize radius variable with -ve value to force entry into the loop
    float radius = -1;
    cout<<"\nYou want to calculate the Volume of a Sphere";
    while(radius <0)
    {
        cout<<"\nEnter the radius of Sphere : ";
        cin>> radius;
    }
    return 4*PI*pow(radius,3)/3;
}

//The project's main method
int main()
{
    // shapes as constants variable
    const int SQUARE=1, RECTANGLE=2,TRIANGLE=3,CIRCLE=4, CUBE=5, SPHERE=6, EXIT=7;
    // Sub choices for calculating
    const int SUB_CHOICE1=1, SUB_CHOICE2=2, SUB_CHOICE3=3 ;
    int choice , subChoice;
    bool again = true;

    //using loop for go back to the menu after finishing each task
    while(again==true)
    {
        cout<<fixed<<showpoint<<setprecision(2);
        // Calling Function to print Main Menu
        displayMainMenu();
        cout << "\t Enter your choice from the menu list: ";
        cin>> choice;
        // Validate user input
        //(keep asking user to enter a choice between 1 & 7)
        while(choice<1 || choice >7)
        {
            cout << "\t Enter your choice from the menu list(1 to 7): ";
            cin>> choice;
        }
        switch(choice)
        {
            int subChoice;  // will used in the sub menu for each shape

            case SQUARE:
                // Calling Function to print sub Menu, receiving shape
                // and argument that expresses other task except Area.
                display_SubMenu("Square" , "Perimeter");
                // Calling Function to read user's choice upon the sub menu
                subChoice = read_subChoice();
                if(subChoice == SUB_CHOICE1)
                    cout<<"\nThe Area = "<<squareArea()<<endl<<endl;
                else if(subChoice == SUB_CHOICE2)
                    cout<<"\nThe Perimeter = "<<squarePerimeter()<<endl<<endl;
                else if(subChoice == SUB_CHOICE3)
                {
                    // back to main menu
                    cout<<"Exit sub menu & Back to main menu ..."<<endl<<endl;
                }
                break;

            case RECTANGLE:
                // print sub Menu
                display_SubMenu("Rectangle" , "Perimeter");
                // read user's choice upon the sub menu
                subChoice = read_subChoice();
                if(subChoice == SUB_CHOICE1)
                    cout<<"\nThe Area = "<<rectangleArea()<<endl<<endl;
                else if(subChoice == SUB_CHOICE2)
                    cout<<"\nThe Perimeter = "<<rectanglePerimeter()<<endl<<endl;
                else if(subChoice == SUB_CHOICE3)
                {
                    cout<<"Exit sub menu & Back to main menu ..."<<endl<<endl;
                }
                break;

            case TRIANGLE:
                // print sub Menu
                display_SubMenu("Triangle" , "Perimeter");
                // read user's choice upon the sub menu
                subChoice = read_subChoice();
                if(subChoice == SUB_CHOICE1)
                    cout<<"\nThe Area = "<<triangleArea()<<endl<<endl;
                else if(subChoice == SUB_CHOICE2)
                    cout<<"\nThe Perimeter = "<<trianglePerimeter()<<endl<<endl;
                else if(subChoice == SUB_CHOICE3)
                {
                    cout<<"Exit sub menu & Back to main menu ..."<<endl<<endl;
                }
                break;

            case CIRCLE:
                // print sub Menu
                display_SubMenu("Circle" , "Circumference");
                // read user's choice upon the sub menu
                subChoice = read_subChoice();
                if(subChoice == SUB_CHOICE1)
                    cout<<"\nThe Area = "<<circleArea()<<endl<<endl;
                else if(subChoice == SUB_CHOICE2)
                    cout<<"\nThe Circumference = "<<circleCircumference()<<endl<<endl;
                else if(subChoice == SUB_CHOICE3)
                {
                    cout<<"Exit sub menu & Back to main menu ..."<<endl<<endl;
                }
                break;

            case CUBE:
                // print sub Menu
                display_SubMenu("Cube" , "Volume");
                // read user's choice upon the sub menu
                subChoice = read_subChoice();
                if(subChoice == SUB_CHOICE1)
                    cout<<"\nThe Area = "<<cubeArea()<<endl<<endl;
                else if(subChoice == SUB_CHOICE2)
                    cout<<"\nThe Volume = "<<cubeVolume()<<endl<<endl;
                else if(subChoice == SUB_CHOICE3)
                {
                    cout<<"Exit sub menu & Back to main menu ..."<<endl<<endl;
                }
                break;

            case SPHERE:
                // print sub Menu
                display_SubMenu("Sphere" , "Volume");
                // read user's choice upon the sub menu
                subChoice = read_subChoice();
                if(subChoice == SUB_CHOICE1)
                    cout<<"\nThe Area = "<<sphereArea()<<endl<<endl;
                else if(subChoice == SUB_CHOICE2)
                    cout<<"\nThe Volume = "<<sphereVolume()<<endl<<endl;
                else if(subChoice == SUB_CHOICE3)
                {
                    // back to main menu
                    cout<<"Exit sub menu & Back to main menu ..."<<endl<<endl;
                }
                break;

            case EXIT:
                cout<<"Exit the program ..."<<endl<<endl;
                // Using return 0 for Exit
                return 0;
        }
    }

    return 0;
}

