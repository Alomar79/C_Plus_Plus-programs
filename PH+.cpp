/*The pH of a solution is a measure of its acidity. The following program asks the
user to enter a pH value and then output a text message based on the input
value. IF else if used to display the needed output.
*/


#include <iostream>
using namespace std;
int main()
{
double pH;
cout << "Enter pH please ";
cin >> pH;
cout << "The solution is : ";
if (pH < 3)
cout << "very acidic." << endl;
else
if (pH >= 3 && pH < 7)
cout << "acidic." << endl;
else
cout << "alkaline." << endl;
/* What do you think is the difference if only
if statements are used?*/
return 0;
}

/*
Update the program using separated if statements, and Write the difference.
Is it in terms of output? or speed? .. Explain.
*/