#include <iostream>
using namespace std;

int main()
{
    const float tax = 6.75, tip = 20;
    string mealName;
    double mealCost, tax_amount,tip_amount,
            taxed_mealCost, total_bill;
    cout << "Enter Meal Name : " ;
    getline(cin , mealName);
    cout << "Enter Meal cost : " ;
    cin >> mealCost;
    tax_amount = mealCost * tax/100;
    taxed_mealCost = mealCost + tax_amount;
    tip_amount = taxed_mealCost * tip/100;
    total_bill = taxed_mealCost + tip_amount;
    cout <<"\nmeal-name : " <<mealName <<"\nmeal-cost : " <<mealCost
         <<"\ntax-amount: " <<tax_amount <<"\ntip-amount: " <<tip_amount
         <<"\ntotal-bill: " <<total_bill <<endl;
    return 0;
}
