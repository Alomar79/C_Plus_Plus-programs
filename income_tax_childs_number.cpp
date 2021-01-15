/*
Assume the income tax of the employees of a company is calculated based on
two factors: the total income and the number of children. Tax is calculated as
follows:
 10% if the income is less than 30,000.
 20% if the income is greater or equal to 30,000 and the employee
has three children or more.
 30% if the income is greater or equal to 30,000 and the employee
has fewer than three children.
Write a C++ program that asks the user to enter his/her income and number of
children then calculates and prints the amount of tax that he/she should pay.
Note: - You need to check the values of two or more
variables. Use logical Operators like AND, OR, etc.
*/


#include <iostream>

using namespace std;

int main()
{
    int childs;
    double income , taxAmount ;
    cout << "enter your income: ";
    cin >> income ;
    cout << "enter the number of children: ";
    cin >> childs ;

    if(income < 30000)
        taxAmount = income * 0.10 ;
    else if(income >=30000 &&  childs >=3)
        taxAmount = income * 0.20 ;
    else if(income >=30000 &&  childs <3)
        taxAmount = income * 0.30 ;
    cout << "she should pay : "<< taxAmount << endl;
    return 0;
}
