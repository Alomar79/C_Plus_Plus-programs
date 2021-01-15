#include <iostream>
using namespace std;

int main()
{
    char ch;
    int rowsCount=4;
    cout << "Enter a character : " ;
    cin.get(ch);

    for(int i=0;i<=rowsCount;i++)
    {
        for(int j=1;j<=rowsCount-i;j++)
            cout<<" ";
        for(int j=1;j<=2*i-1;j++)
            cout<<ch;
        cout<<endl;
    }
    for(int i=rowsCount-1;i>=1;i--)
    {
        for(int j=1;j<=rowsCount-i;j++)
            cout<<" ";
        for(int j=1;j<=2*i-1;j++)
            cout<<ch;
        cout<<endl;
    }
    return 0;
}
