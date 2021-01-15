#include <iostream>

using namespace std;

int main()
{
    int n;
    string x="Prime\n";
    cout<<"------Test the number if Prime--------- \n\n";

    cout << "Enter number\n" << endl;
    cin>>n;

    for(int i=2; i<n; i++){
        if(n%i==0){
            x="Not Prime\n";
            break;
        }
    }
    cout<<"\n"<<n<<" is "<<x;

    cout<<"\n\n------Find Primes in Range--------- \n\n";

     int i, k;
    for (k=1;k<=100;k++)
    {
        bool isPrime = true;
        // 0 and 1 are not prime numbers
        if (k == 0 || k == 1) {
            isPrime = false;
        }
        else {
            for (i = 2; i<k ; i++) {
                if (k % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
            cout << k << ",  ";
    }


    return 0;
}


/**

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    bool prime;
// prime number must have only 1 divisor other than 0
//total no. of divisors must be 2 (1 and itself)
    for(j=2; j<=100; j++)
    {
        prime=0;
        for(i=2; i<j; i++)
        {
            if (j%i==0) prime=1;
        }
        if(prime==0) cout<<j<<endl;
    }
    return 0;
}


*/
