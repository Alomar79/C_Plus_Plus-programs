#include <iostream>
using namespace std;

int maximum; // maximum is a global variable.
// Updates maximum if parameter is larger
void set_max(int a)
{
    if (maximum < a)
        maximum = a;
}

int max3(int i, int j, int k)
{
    maximum = i;
    set_max(j);
    set_max(k);
    return maximum;
}

int main()
{
    int i, j, k;
    cout << "Enter first integer : ";
    cin >> i;
    cout << "Enter second integer: ";
    cin >> j;
    cout << "Enter third integer : ";
    cin >> k;
    maximum = max3(i, j, k);
    cout << "The maximum = " << maximum << endl;
    return 0;
}
