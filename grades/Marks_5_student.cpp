#include <iostream>
using namespace std;
char grade(double mark);
int main()
{
    int x,y,z, avg;
    //marks for five students
    for(int i=1; i<=5; i++)
    {
        cout<<"Enter three subjects marks for student "<< i<<"\n";
        cin>>x>>y>>z;
        avg = (x+y+z)/3;
        if(avg>=90)
            cout<<"Grade is A\n";
        else if(avg>=80)
            cout<<"Grade is B\n";
        else if(avg>=70)
            cout<<"Grade is C\n";
        else if(avg>=60)
            cout<<"Grade is D\n";
            cout <<"\n";
    }
    return 'F';
}
