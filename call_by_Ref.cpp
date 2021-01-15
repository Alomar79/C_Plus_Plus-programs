#include <iostream>
using namespace std;

 //prototype
void change(int & , int & ,  int & );

int main()
{
    // Print a message explaining the program;
    cout << "\nThis program provides a 'laboratory' in which\n"
    << "experiments can be performed on parameter-passing.\n";
    int arg1, arg2, arg3;
    // 1. Initialize arguments to -1
    arg1 = arg2 = arg3 = -1;
    // 2. Display arg1, arg2, and arg3 before calling change() function
    cout << "\nBefore: arg1 = " << arg1
    << ", arg2 = " << arg2
    << ", arg3 = " << arg3 << endl;
    // 3. Call change(), passing in arg1, arg2, and arg3 as arguments
    change(arg1, arg2, arg3);
    // 4. Display arg1, arg2, and arg3 after calling change() function
    cout << "\nAfter: arg1 = " << arg1
    << ", arg2 = " << arg2
    << ", arg3 = " << arg3 << "\n\n";
    return 0;
}

/**************************************************************************
* change() function: *
* receives: 3 integers, stored in param1, param2, param3; *
* supposed to return: the (altered ???) values of param1, param2, param3. *
**************************************************************************/
void change(int & param1, int & param2,  int & param3)
{
    param1 = 1;
    param2 = 2;
    param3 = 3;
}
