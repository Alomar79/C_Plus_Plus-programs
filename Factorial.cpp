#include <iostream>
using namespace std;
int main()
{
    unsigned int n;
    int fact=1;
    cout<<"enter integer n to calculate factorial :";
    cin>>n;
    for(int i=1; i<=n; i++)
        fact = i*fact;
    cout<<endl<<"factorial of the number is :"<<fact<<endl;
    return 0;
}
