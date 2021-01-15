#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    while ( i < 2 )
    {
        string x;
        cout<<"enter name\n";
        getline(cin,x);
        cout<<"Hello, "<<x<<"\n";
        i = i + 1;
    }
    return 0;
}
