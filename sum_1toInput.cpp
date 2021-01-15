/* 
write a C++ program that calculates and prints the sum of integers from 1 to a value entered by the user.(use while).
sample run:
When to stop? 7
SUM of numbers from 1 to 7 = 28
*/

#include <iostream>

using namespace std;

int main()
{
    int i=0 , number , sum=0;
    cout << "When to stop? ";
    cin >> number;
    while (i <= number)
    {
        sum = sum + i;
        i = i +1;
    }

    cout << "SUM of numbers from 1 to "<< number << " = " << sum << endl ;
    return 0;
}


