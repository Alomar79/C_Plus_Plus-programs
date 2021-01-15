/*
Write a function myread that reads from the user a number from 1 to N. Use a for loop to force the user to enter the number in the required range.
Create a function mysum that sums two numbers a and b
Create a function mymul that multiplies a and b
Create a function mysub that computes a –b
 Using the function myread, let the user enter two numbers a and b between 1 and 10
 Using the function myread let the user enter a number called “choice” from 1 to 3
 Using a switch structure, use mysum, mymul or mysub to compute
o the sum of a and b if choice =1
o the produce of a and b if choice =2
o a-b if choice =3
 display the result
*/




#include <iostream>
#include<string>
using namespace std;
int myread( int ); //Function prototype
int mysum(int , int);
int mymul(int , int);
int mysub(int , int);
int main(void)
{
    int a,b,choice , result;
    string oper;
    a = myread(10);
    b = myread(10);
    choice = myread(3);
    switch (choice)
    {
        case 1:
            result = mysum(a,b);
            oper = " Sum ";
            break;
        case 2:
            result = mymul(a,b);
            oper = " mul ";
            break;
        case 3:
            result = mysub(a,b);
            oper = " Sub ";
            break;
    }
    cout << "\n\nResult of "<<oper<<" is : " << result <<endl;
    return 0;
}
int myread(int N)
{
    int num ;
    cout<<"Enter  number between 1 , "<< N <<" :";
    cin>> num;
    while(num <1 || num > N)
    {
        cout<<"Enter  number between 1 , "<< N <<" :";
        cin>> num;
    }

    return num;
}
int mysum(int a , int b)
{
    int sum = a+b;
    return sum;
}
int mymul(int a , int b)
{
    int mul = a*b;
    return mul;
}
int mysub(int a , int b)
{
    int sub = a-b;
    return sub;
}


