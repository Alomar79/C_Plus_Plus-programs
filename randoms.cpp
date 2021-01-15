#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>


using namespace std;

int main()
{
    //random between (min , max)
    int max = 10 ;
    int min = 2;
	srand((unsigned)time(0));
	int i = 0;
	while(i++ < 25) {
	int r = (rand() % (max-min+1)) + min;
	cout << r << " ";

	}


	return 0;


}
