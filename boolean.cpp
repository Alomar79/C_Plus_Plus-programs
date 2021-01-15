//
//  boolean.cpp
//  Testing boolean variables
//
//  Created by Latifa Al-Naimi on 9/27/19.
//  Copyright © 2019 Latifa Al-Naimi. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    bool x;
    
    cout << "Are you hungry? Enter 1 for yes or 0 for no: ";
    cin >> x;
    
    cout <<"You entered: " << x << endl;
    
    if (x)
        cout <<"Go eat."<<endl;
    else
        cout <<"Good."<<endl;
    
    return 0;
}
