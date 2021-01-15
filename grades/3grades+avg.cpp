//get three grades of a student (HW, mid exam, and final) 
//and specify if he “Pass” or “Fail” 
//(he passes if his average is 60 or above, and fails otherwise).

#include <iostream>
using namespace std;

int main()
{
    int HW, mid , final ;
	double avg;
    cout << "HW, mid , final : " << endl;
    cin>> HW >> mid >> final;
    avg = (HW + mid + final)/3.0 ;
	cout << "Average is : " << avg << "\n\n";

	if(avg >= 60)
		cout << "Pass" << "\n\n";
	else
		cout << "Fail" << "\n\n";

	return 0;
}
