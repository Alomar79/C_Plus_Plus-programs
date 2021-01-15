/*

Using a switch statement, write a c++ program that will check if a user is allowed to enter to a building or not. The program first asks the user to enter his/her age. Then it asks him/her whether he/she is a Male or a Female

•	If the user enters ‘F’ or ‘f’, the program should display “You are a Female” and sets the minimum allowed entrance age to 18.
•	If the user enters ‘M’ or ‘m’, the program should display “You are a Male” and sets the minimum allowed entrance age to the building to 16.
•	Otherwise, the program should display “Incorrect input”.

At the end, your program should display “You are allowed to enter” if his/her age is above the minimum allowed age. Otherwise, display “You are not allowed to enter”. 


Below two sample runs:

Please enter you age: 17
Please state whether you are a male or a female: m
You are a male
You are allowed to enter

another sample run:

Please enter you age: 16
Please state whether you are a male or a female: F
You are a female
You are not allowed to enter

*/

#include <iostream>

using namespace std;


int main()
{
    int age, allowedAge;
    char s;
    cout << "Please enter you age: ";
    cin >> age;
    while(!cin || age<=0 || age >100 ) // or: while(cin.fail() ||...)
    {
        cout<<"Incorrect input ! - expected number[1,100]\n";
        cin.clear();
        cin.ignore();
        cout << "Please enter you age: ";
        cin >> age;
        //return 0;
    }
    
    cout << "Please state whether you are a male or a female: ";
    cin >> s;
    s= toupper(s);
    if(s == 'F' )
    {
        cout << "\nYou are a female\n";
        allowedAge = 18;
    }
    else if(s == 'M')
    {
        cout << "\nYou are a male\n";
        allowedAge = 16;
    }
    else
    {
        cout<<"Incorrect input ! \n";
        return 0;
    }
    if(age >= allowedAge)
        cout<<"You are allowed to enter\n";
    else
        cout<<"You are not allowed to enter \n";
    return 0;
}
