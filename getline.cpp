//  Created by Latifa Al-Naimi on 9/27/19.
//  Copyright © 2019 Latifa Al-Naimi. All rights reserved.
//
//  getline.cpp
//  Testing getline and cin
//


#include <iostream>
#include <string>
using namespace std;

int main () {
    
    float gpa;
    cout <<"Enter your gpa: ";
    cin >> gpa;
    
    cin.ignore();
    string n;
    cout << "Enter your name: ";
    getline(cin,n);
    
    cout << "Your name: " << n <<endl;
    cout <<"GPA = " << gpa << endl;
    
   
}
