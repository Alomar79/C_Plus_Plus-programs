/*
 Write a c++ program that shows a menu to the user if s/he types (1) the program will give them the summation of the entered number if s/he entered (2) the program with give them the factorial of an entered numbers (Note the Summation of 5 is 1+2+3+4+5 and the Factorial of 5 is 1x2x3x4x5

 Update the program so that if a user entered the wrong input it will repeat the menu and ask them to select again

Update the program to write the result on file SumFact.text - and then read from it
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ch1 = 1;
    const int ch2 = 2;
    int choice , number, summation = 0, factorial = 1;
    ofstream outfile ;
    ifstream infile;
    outfile.open("SumFact.txt");
    string inp="";

    //Display the Menu
    cout<<"Enter your choice: \n";
    cout<<"\t1 : summation \n";
    cout<<"\t2 : Factorial \n";
    cin>> choice;
    while (choice !=1 && choice !=2)
    {
        cout<<"Wrong input, Enter your choice again: \n";
        cout<<"\t1 : summation \n";
        cout<<"\t2 : Factorial \n";
        cin>> choice;
    }

    switch (choice)
    {
        case ch1: cout <<"\nYou selected Summation! \n";
                cout << "Enter a number to calculate Summation: ";
                cin>> number;
                for(int i =1; i<=number; i++)
                {
                    summation += i ;
                }
                //cout<<"\nSummation for entered number: "<<number<<" is ";
                //cout<<summation<<endl;
                outfile <<"Summation of "<< number << " = " ;
                outfile <<summation ;
                break;
        case ch2: cout <<"\nYou selected Factorial! \n";
                cout << "Enter a number to calculate Factorial: ";
                cin>> number;
                for(int i =1; i<=number; i++)
                {
                    factorial *= i ;
                }
                //cout<<"\nFactorial for entered number: "<<number<<" is ";
                //cout<<factorial<<endl;
                outfile <<"Factorial of "<< number << " = " ;
                outfile <<factorial ;
                break;
    }
    outfile.close();
    cout << endl ;

    //Read Result from file:
    infile.open("SumFact.txt");
    while(!infile.eof())
    {
       infile >> inp;
       cout << inp <<" " ;
    }
    cout << endl;
    infile.close();

    return 0;
}
