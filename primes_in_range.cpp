#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    while (x <= 21)
    {
        bool Prime = true;
        if (x < 2) {
            Prime = false;
        }
        else {
            for (int i = 2; i<x ; i++) {
                if (x % i == 0) {
                    Prime = false;
                    break;
                }
            }
        }
        if (Prime)
            cout << x << "\t";
        x++;
    }


    return 0;
}
