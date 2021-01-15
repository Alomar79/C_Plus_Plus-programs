/*Write a C++ program that asks the user to enter his/her full name, and 3 grades
in three different courses, and then display the student’s average. Then print
“Congrats … You Passed the semester !” if the average of a student is 60 or
greater. No action or message should be printed if the score is less than 60.*/


#include <iostream>
#include <string>
using namespace std;
int main()
{
string full_name;
double grade1, grade2, grade3, avg;
cout << " Please enter your name";
getline(cin, full_name);
cout << " Enter the grade of the first course";
cin >> grade1;
cout << " Enter the grade of the second course";
cin >> grade2;
cout << " Enter the grade of the third course";
cin >> grade3;
avg = (grade1 + grade2 + grade3) / 3;
cout << " Your average = " << avg << endl;
// Use if statement to print congrats if avg >=60
if (avg >= 60)
cout << full_name << " Congrats!.. You passed the semester
"<<endl;
return 0;
}
 /*
Update the code ( avg.cpp) that prints “Congrats … You Passed the Course!” if
the score of a student is 60 or greater. If the score is less than 60 the program
prints “You failed the course, try harder next time!”.
*/


