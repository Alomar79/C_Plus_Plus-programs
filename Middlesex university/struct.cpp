
#include <iostream>
#include <vector>

//week 6 - middlesex university

int main()
{
    struct student {
        std::string name;
        int id ;
        std::string email;
    };

    student st ; 
    
    st.name = "Ali";
    st.id = 20054;
    st.email = "ali@gmail.com";

    std :: cout << "Name : "<< st.name <<"\niD: "<<st.id << "\nEmail: "<<st.email;

    return 0;
}
