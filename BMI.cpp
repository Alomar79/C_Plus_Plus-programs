#include <iostream> 
#include <iomanip> 

using namespace std; 
int main() 
{ 
	double Mass, Height, BMI;
	cout << "Enter your mass (in kilograms, kg): ";
	cin >> Mass;
	cout << "Enter your height (in meters, m): ";
	cin >> Height;
	BMI = Mass / pow(Height, 2);
	cout<< fixed << showpoint << setprecision(2);
	cout << "Your Body Mass Index is : "<< BMI << " kg/m2"<< endl;
	if(BMI >= 30)
		{
			cout << "\nYou are severly overweight, how about a 20 minutes walk twice a week? \n";
		}
	 system("pause");
	return 0; 
}
