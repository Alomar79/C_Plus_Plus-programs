#include <iostream>
#include<iomanip>
using namespace std;

double average(double x[], int n)
{
    double sum=0;
    for(int i=0; i<n; i++)
        sum+=x[i];
    return sum/n;
}
char grade(double mark)
{
    if(mark>=90)
        return 'A';
    else if (mark>=80)
        return 'B';
    else if (mark>=70)
        return 'C';
    else if (mark>=60)
        return 'D';
    else
        return 'F';
}

int main()
{
    double marks[][3]=
    {
        {89,88,90},
        {80,85,79},
        {96,92,95},
        {68,73,55},
        {45,60,58}
    };
    cout<<"Stud# Math Computer English\n";
    for(int i=0; i<5; i++)
    {
        cout<<setw(3)<<i+1;
        for(int j=0; j<3; j++)
            cout<<setw(8)<<fixed<<setprecision(1)<<marks[i][j];
        cout<<endl;
    }
    return 0;
}
