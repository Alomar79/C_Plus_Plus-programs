#include <iostream>
#include <string>
using namespace std;
int main()
{
int yearCode;
string yearName;
cout << "Please enter the number of a class year (1-5) : ";
cin >> yearCode;
switch (yearCode)
{
case 1:
yearName ="Freshman";
break;
case 2:
yearName = "Sophomore";
break;
case 3:
yearName = "Junior";
break;
case 4:
yearName = "Senior";
break;
case 5:
yearName = "Graduate";
break;
default:
cout << "YearName: code error: " << yearCode << endl;
yearName = "";
}
cout << yearName << endl;
return 0;
}
