//read three numbers form user 
//and based on these three numbers, it
//prints one of the following messages:
//o “All of them are the same”.
//o “Two of them are the same, one is different”.
//o “They are different”

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a , b , c;
    cout << "Enter three integer nums a , b , c : " << endl;
    cin>>a>>b>>c;

	if(a==b && b==c)
		cout << "All of them are the same." ;
	else if((a==b || b==c)||a==c )
		cout << "Two of them are the same, one is different." ;
	else
		cout << "They are different." ;

    cout <<endl<<endl;
    return 0;
}
