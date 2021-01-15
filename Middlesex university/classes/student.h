#include <iostream>
#include <string>
using namespace std;
class student{
    private:
        string name;
        int id;
        float mark;
    public:        
        student(string name, int no, float score)
        {
            name = name;
            id = no;
            mark = score;
        }
        void printStudent()
        {
            cout<<" Name: "<<name << endl;
            cout<<" Id: "<<id << endl;
            cout<<" Mark: "<<mark << endl;
        }     
};
