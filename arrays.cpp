#include <iostream>

using namespace std;

int main()
{

    double distance[10], sumPositive=0.0, sumNegative=0.0;

    for(int i=0;i<10;i++){
        cout << "Enter Element "<<i+1<<" : " ;
        cin>>distance[i];
    }
    cout<<"--------------------------\n";
    for(int i=0;i<10;i++){
        cout<<distance[i]<<" ";

        if(distance[i]>0)
            sumPositive +=distance[i];
        else
            sumNegative +=distance[i];
    }
    cout<<"\nsum Positive = "<<sumPositive<<"\n";
    cout<<"sum Negative = "<<sumNegative<<"\n";
    return 0;
}
