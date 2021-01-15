#include <iostream>
using namespace std;
int main()
{
    int choice , number;
    int counter ;
    int summation = 0;
    int factorial = 1;

    cout<<"Enter the choice: \n\n";
    cout<<"Choose 1 for summation \n";
    cout<<"Choose 2 for Factorial \n";
    cin>> choice;
    while(choice!=1 && choice !=2)
    {
        cout<<"Enter the choice: \n\n";
        cout<<"Choose 1 for summation \n";
        cout<<"Choose 2 for Factorial \n";
        cin>> choice;
    }
    if(choice==1)
    {
        cout << "Enter a number: ";
        cin >> number;
        counter = number ;
        while(counter >= 1)
        {
            summation = summation + counter ;
            counter = counter - 1 ;
        }
        cout<<"\n"<<"Summation of ("<< number
            << ") = "<<summation<<endl;
    }
    else if(choice==2)
    {
        cout << "Enter a number: ";
        cin>> number;
        counter = number ;
        while(counter >= 1)
        {
            factorial = factorial * counter ;
            counter = counter - 1 ;
        }
        cout<<"\n"<<"Factorial of ("<< number
            << ") = "<< factorial << endl;
    }
    return 0;
}
