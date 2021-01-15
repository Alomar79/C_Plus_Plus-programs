#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;

class student
{
    private:
        string name;
        int age;
    public:
        student(string nm, int g);
        void setName(string nm);
        void setAge(int g);
        string getName();
        int getAge();



};

#endif // STUDENT_H
