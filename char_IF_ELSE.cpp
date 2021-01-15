
//  Created by Latifa Al-Naimi on 9/27/19.
//  Copyright © 2019 Latifa Al-Naimi. All rights reserved.
//
//
//  chartest.cpp
//  Testing char variables with if-else

#include <iostream>
using namespace std;

int main() {
    
    //// TESTING CHAR VARIABLES WITH IF-ELSE
    
    char company_type;
    
    cout <<"Enter your company type. \n";
    cout <<"\t p for private, u for public, s for semi-private\n";
    cin >> company_type;
    ////
    
    if (company_type == 'p' ||  company_type == 'P')
        cout <<"vacation days are 60." << endl;
    else if (company_type == 'u' ||  company_type == 'U')
        cout <<"vacation days are 45." << endl;
    else if (company_type == 's' ||  company_type == 'S')
        cout <<"vacation days are 50." << endl;
    else
        cout << "Invalid option." << endl;
    
    return 0;
}
