#include <iostream>

using namespace std;

int main()
{
    double e = 1.0;
    int n, fact;
    cout << "Enter n :" << endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        fact=i;
        for(int k=i-1; k>0; k--){
            fact = fact * k;
        }
        e +=1.0/fact ;
    }
    cout<<"\n"<< e ;
    return 0;
}
