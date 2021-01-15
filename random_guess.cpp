/*
Write a c++ program that first generates a random number n between 1 and 10. The user is then asked to guess this number in up to 10 trials.
For each number suggested by the user:
- The program displays “Correct answer” and exits the loop if the number is correct.
- If the number is wrong, the program should display:
 “Wrong answer, the correct number is bigger than the number you suggested” if the random number is bigger than the suggested number by the user.
 “Wrong answer, the correct number is smaller than the number you suggested” if the random number is smaller than the suggested number by the user.
Finally, if the user finishes 10 trials without guessing the correct answer, the program displays “You failed to guess the number”.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int min=1, max=10 , counter = 1, n , ans;

    srand((unsigned)time(0));
    n = (rand() % (max - min + 1)) + min;
    cout << "Guess the secret number? " ;
    cin >> ans;
    while(n != ans && counter != 10)
    {
        if(n > ans)
        {
            cout <<"Wrong answer, the correct number is bigger than";
            cout <<" the number you suggested."<< endl;
        }

        else
        {
            cout <<"Wrong answer, the correct number is smaller than";
            cout <<" the number you suggested."<< endl;
        }

        cout << "Guess the secret number? " ;
        cin >> ans;
        counter += 1 ;
    }
    if(n == ans)
        cout << "Correct answer" << endl;
    else
        cout << "\nYou failed to guess the number" << endl;

	return 0;
}
