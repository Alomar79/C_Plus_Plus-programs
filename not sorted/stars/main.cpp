
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    for(int row=5; row>=1;row--)
    {
        for( int col=1; col<=row ; col++)
        {
            cout<<" *";
        }
        cout<<"\n";
    }
    return 0;
}
