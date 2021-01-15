#include <iostream>
//#include <cmath>
using namespace std;

//Exercise 2:
//read the salary and deduct the tax, then print the net salary. 
//The tax is 5% if the salary less than 10000 
//and 10% if it is equal 10000 or more.

int main()
{
	
	double salary, tax, netSalary;
	cout << "Enter salary : " << endl;
	cin>> salary  ;    

	if(salary <=10000)
			tax = 0.05;
	else
		tax = 0.10;

	netSalary = salary - salary * tax;

	cout << netSalary << endl;
	

    return 0;
}
