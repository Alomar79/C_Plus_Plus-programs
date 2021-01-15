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
