#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    float diameters[]={16.25, 18.96, 22.34, 18.94, 17.42, 22.63};
    ofstream oFile;
    oFile.open("result.txt");
    for(int i=0;i<6;i++){
        oFile<<diameters[i]<<" ";
    }
    oFile.close();


    float dm[6];
    ifstream iFile;
    iFile.open("result.txt");
    for(int i=0;i<6;i++){
        iFile>>dm[i];
        cout<<dm[i]<<" ";
    }

    iFile.close();

cout<<"\n---------------------------\n";
int a[5]={3,4};
for(int i=0;i<5;i++)
    cout<<a[i]<<" ";



    return 0;
}
