#include<iostream>
using namespace std;
int main()
{
    float distance[10];
    float min, max;
    cout<<"Enter array values \n";
    for(int i=0; i<10; i++)
    {
        cout<<"\n Enter element ["<<i<<"] \t";
        cin>>distance[i];
    }
    min = max = distance[0];
    for(int i=0; i<10; i++)
    {
        if(max<distance[i])
            max=distance[i];
        if(min>distance[i])
            min=distance[i];
    }
    cout<<" max is "<<max<<endl;
    cout<<" min is "<<min<<endl;
    return 0;
}
