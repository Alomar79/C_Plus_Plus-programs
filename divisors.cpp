#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : " << endl;
    cin >>n;
    for(int k=1; k<n; k++)
    {
        if(n%k==0)
            cout<<k<<" ";
    }
    return 0;
}


/**

#include<iostream>
using namespace std;
int main()
{
    int n, i, count;
    cout<<"\n Enter a number to check if it is a prime : ";
    cin>>n;
    count=0;
// number must have only 1 divisor other than 0
//total no. of divisors must be 2 (1 and itself)
    for(i=1; i<=n; i++)
    {
        if (n%i==0)
            count++;
    }
    cout<<"\n the number of divisors it has are "<<count<<endl;
    if(count<=2)
        cout<<"\n Its a prime number"<<endl;
    else
        cout<<"\n It is not prime number"<<endl;
    return 0;
}

*/
