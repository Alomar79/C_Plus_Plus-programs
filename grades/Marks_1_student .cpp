/*
Write C++ program that gets the score of a student as input, and calculates
and prints the letter grade according the following table. If
the user entered invalid input, then display error message.
Score Grade
>= 90 A
>= 80 B
>=70 C
>= 60 D
< = 59 F
*/

#include <iostream>
using namespace std;

int main()
{
    int score;
    cout <<"Enter the score: ";
    cin >> score;
    if(score >=0 && score <=100){
        if(score>=90)
            cout<<"Grade is A\n";
        else if(score>=80)
            cout<<"Grade is B\n";
        else if(score>=70)
            cout<<"Grade is C\n";
        else if(score>=60)
            cout<<"Grade is D\n";
        else if(score<=59)
            cout<<"Grade is F\n";
    }
    else{
        cout<<"Invalid input, ";
        cout<<"value must be between ZERO and 100\n";
    }

    return 0;
}

