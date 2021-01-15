#include <iostream>
using namespace std;
void replace(int x[],int s, int oldValue, int newValue )
{
for(int i=0;i<s;i++)
if(x[i]==oldValue)
x[i]=newValue;
}
void replace(int x[],int s, int Val )
{
    // replace all elements of array
    for(int i=0;i<s;i++)
        x[i]=Val;
}
int main()
{
    int[] a={2,7,4,2,8};
    cout<<"Array before calling function replace \n";
    for(int i=0;i<5;i++)
        cout<<a[i]<< '\t';
    cout<<endl;
    replace (a, 5, 2, 9);
    cout<<"Array after calling function replace \n";
    for(int i=0;i<5;i++)
        cout<<a[i]<< '\t';
    cout<<endl;

    cout<<endl;
    replace (a, 5, 49);// replace all elements of array
    cout<<"Array after calling another function replace  \n";
    for(int i=0;i<5;i++)
        cout<<a[i]<< '\t';
    cout<<endl;
    return 0;
}
