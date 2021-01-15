#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //Car No. Miles Driven Gallons Used
    int No , m , g ;
    int totalMiles = 0 , totalGallons = 0 ;
    double mBYg = 0.0 , total_MBYG = 0.0 , Avg_M_G = 0.0;
    ofstream oFile;
    oFile.open("CarMiles.txt");

    oFile << endl<<"\t"<< 54 <<"\t"<< 250 <<"\t"<< 19 ;
    oFile << endl<<"\t"<< 62 <<"\t"<< 525 <<"\t"<< 38 ;
    oFile << endl<<"\t"<< 71 <<"\t"<< 123 <<"\t"<< 6  ;
    oFile << endl<<"\t"<< 85 <<"\t"<< 1322<<"\t"<< 86 ;
    oFile << endl<<"\t"<< 97 <<"\t"<< 235 <<"\t"<< 14 ;

    cout<<"Car No.\t  Miles Driven\t  Gallons Used \t   Miles/Gallon \n";
    cout<<"-------\t  ------------\t  ------------ \t   ------------ \n";
    oFile.close();
    ifstream inFile;
    inFile.open("CarMiles.txt");
    while(!inFile.eof()){
        inFile>>No>>m>>g;
        mBYg =(double) m/g ;
        totalMiles += m ;
        totalGallons += g;
        total_MBYG +=mBYg;

        cout<<""<<No<<"\t\t"<<m<<"\t\t"<<g<<"\t\t"<<mBYg<<"\n" ;
    }
    cout<<"----------------------------------------------------------------\n\n";
    Avg_M_G =total_MBYG / 5;
    cout<<"Total Miles Driven = "<<totalMiles<< endl;
    cout<<"Total Gallons Used = "<<totalGallons<< endl;
    cout<<"Average Miles by Gallon for all cars = "<<Avg_M_G<< endl;

    return 0;
}

/*
CarMiles.txt :
	54	250	19
	62	525	38
	71	123	6
	85	1322	86
	97	235	14
*/
