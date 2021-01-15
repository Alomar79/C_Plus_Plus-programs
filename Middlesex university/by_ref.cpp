#include <iostream>
#include <vector>

//week 6 - middlesex university

int main()
{
    // standard integer variable
    int my_number = 5;
    // pointer to an integer
    int* ptr_to_my_number = & my_number ;

    std :: cout << "Variable: " << my_number<<'\n'
                << " address: " << & my_number <<'\n';
    std :: cout << "Pointer: " << ptr_to_my_number<<'\n'
                << " dereference: " << *ptr_to_my_number<<'\n'
                << " address: " << & ptr_to_my_number <<'\n' ;

    return 0;
}