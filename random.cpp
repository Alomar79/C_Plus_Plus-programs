#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int min, max , x;
    cout << "Enter lower number: " ;
    cin >> min;
    cout << "Enter upper number: " ;
    cin >> max;
	srand((unsigned)time(0));
    x = (rand() % (max - min + 1)) + min;
	cout << endl;
	cout << "The Random number is : "<< x << endl;

	return 0;
}
