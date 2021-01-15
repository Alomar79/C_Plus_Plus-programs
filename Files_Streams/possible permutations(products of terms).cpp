/*
Write a C++ program that calculates, prints and saves in a file the number of possible permutations of r items in a set of 𝒏 elements.
* Your program should keep asking first the user to enter a number 𝒏 between 3 and 10.
* Once the user enters a valid number n, the program should keep asking the user to enter a number r that has to satisfy 𝟏≤𝒓≤(𝒏−𝟏).
* Once the user enters a valid number 𝑟, a for loop should be used to compute the number of permutations 𝑷 as follows:
      𝑛
𝑷 = Π 𝑘 =(𝑛−𝑟+1)×(𝑛−𝑟+2)×(𝑛−𝑟+3)×…×𝑛
   𝑘=𝑛−𝑟+1
In fact, 𝑃 is the product of all the numbers from (𝑛−𝑟+1) till 𝑛.
* After computing 𝑃, the program should display the number 𝑃, then save n, r and 𝑃 in a file called “Permutations.txt”
Example and sample run
For example, if 𝑛=6, and 𝑟=4, then 𝑃 is the product of all the terms from (6-4+1)=3 till 6, i.e. 𝑃=3×4×5×6=360.

Below a sample run:

Please enter n between 3 and 10: 17
Please enter n between 3 and 10: 6
Please enter r between 1 and 5: 7
Please enter r between 1 and 5: 4
The number of permutations of 4 items in a set of 6 elements is : 360

And the file “Permutations.txt” should look like this
6 4 360
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n , r , p=1 ;
    ofstream outfile ;
    while(n<3 || n>10)
    {
        cout<<"Please enter n between 3 and 10: ";
        cin >> n;
    }
    while(r<1 || r>n-1)
    {
        cout<<"Please enter r between 1 and "<< n-1<<" : ";
        cin >> r;
    }

    for(int k = n-r+1; k<= n; k++)
    {
        p = p*k;
    }

    cout<< "The number of permutations of "<<r<<" items in a set of "
            <<n<<" elements is : "<< p << "\n" ;

    outfile.open("Permutations.txt");
    outfile << n <<' '<< r <<' '<< p;
    outfile.close();

    return 0;
}