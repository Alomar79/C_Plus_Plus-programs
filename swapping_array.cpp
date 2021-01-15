#include <iostream>
#include<iomanip>
using namespace std;

void swapping(int arr[3][3]);

int main()
{
    int arr1[3][3]={
        {1,4,7},
        {2,5,8},
        {3,6,9}};

    swapping(arr1);

    return 0;
}
void swapping(int a1[3][3]){
    int  a2[3][3] ;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a2[i][j] = a1[j][i];
            cout << setw(8)<<a2[i][j];
        }
        cout<<endl;
    }
}
