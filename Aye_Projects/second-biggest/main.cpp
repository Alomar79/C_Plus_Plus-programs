#include <iostream>

using namespace std;

void extremeValues (double[ ], int );
int main()
{
    int x ;
    const int N = 5 ;
    double nums[N] ;

    for(int i = 0; i< N; i++)
    {
        cout <<"Enter Value "<<i+1<<" : ";
        cin >> nums[i] ;
    }

    extremeValues( nums, N);

    return 0;
}

void extremeValues (double numbers[ ],int size)
{
    double smallest ;
    double secondSmallest;
    double largest ;
    double secondLargest ;

    if (numbers[0] < numbers[1])
    {
        smallest = numbers[0];
        secondSmallest = numbers[1];
    }

    else
    {
        smallest = numbers[1];
        secondSmallest = numbers[0];
    }

    for( int i=2; i<size ; i++)
    {
        if(numbers[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = numbers[i];
        }
        else if (numbers[i] < secondSmallest && numbers[i] != smallest)
        {
            secondSmallest = numbers[i];
        }

        if(numbers[i] > largest)
        {
            secondLargest = largest;
            largest = numbers[i];
        }
        else if (numbers[i] > secondLargest && numbers[i] != largest)
        {
            secondLargest = numbers[i];
        }
    }
    cout << "The second smallest value is: "<<secondSmallest << endl;
    cout << "The second Largest value is: "<<secondLargest << endl;

}
