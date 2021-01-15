#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int x , y , M;
    int min =1 , max =10;
	srand((unsigned)time(0));
    x = (rand() % (max - min + 1)) + min;
    y = (rand() % (max - min + 1)) + min;
	cout << endl;
	cout << "The generated numbers are ";
	cout << x <<", and " << y << endl;
	cout << x <<" * "<< y << " ?"<< endl;
	cin >> M;
	if(M == x*y)
        cout << "Great! .. Correct answer \n" ;
    else{
        cout << "Wrong answer .. The correct answer is " ;
        cout << x*y << endl;
    }
	return 0;
}