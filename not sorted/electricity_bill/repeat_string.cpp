#include <iostream>
#include <string>

using namespace std;

string repeat(string  , int );

int main()
{
    int times ;
    string st = "Hi" , new_string="";

    cout<< "How many times want to repeat string: ";
    cin >> times ;
    cout <<"\n";
    new_string = repeat(st, times);
    cout << "C++ string multiplication: " <<new_string << "\n\n";

    return 0;
}

string repeat(string str,int times)
{
    string new_str = "";
    int x = 0;
    while(x < times)
    {
        new_str = new_str + str;
        x = x + 1;
    }

    return new_str;
}

