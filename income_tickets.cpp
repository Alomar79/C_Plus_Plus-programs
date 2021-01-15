#include <iostream>
using namespace std;
int main()
{
    int A_qty, B_qty, C_qty;
    int A_income, B_income, C_income, total;
    cout << "Enter the number of sold tickets for class A: " ;
    cin >> A_qty;
    cout << "Enter the number of sold tickets for class B: " ;
    cin >> B_qty;
    cout << "Enter the number of sold tickets for class C: " ;

    cin >> C_qty ;


    A_income = A_qty * 15 ;
    B_income = B_qty * 12 ;
    C_income = C_qty * 9 ;
    total = A_income + B_income + C_income;



    cout << "\nincome generated from Class A = " << A_income<<endl;
    cout << "income generated from Class B = " << B_income<<endl;
    cout << "income generated from Class C = " << C_income<<endl;
    cout << "the total amount of sales     = " << total <<endl;
    return 0;
}
