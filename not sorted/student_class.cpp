#include <iostream>
using namespace std;

class student{
    private:
        string name;
        int age;
    public:
        student(string n,  int g){
            name = n;
            age = g;
        }
        student(){
            name = "";
            age = 0;
            cout<<"..hani..";
        }
        void setName(string nm){
            name = nm;
        }
        void setAge(int g){
            age = g;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
};
int main()
{
    student std1("Ahmad",35) ;
    student std2;

    std2.setName("Hamid");
    std2.setAge(42);

    

    
    cout<<"Stu1: "<<std1.getName() << " , Age: "<<std1.getAge()<<endl;
    cout<<"Stu2: "<<std2.getName() << " , Age: "<<std2.getAge()<<endl;
    
    return 0;
}
