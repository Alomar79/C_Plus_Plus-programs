#include "student.h"
//#include <iostream>
#include <string>

student::student(string nm , int ag)
{
    name = nm;
    age = ag;
}

void student::setName(string nm)
{
    name = nm;
}

string student::getName()
{
    return name;
}

void student::setAge(int ag)
{
    age = ag;
}

int student::getAge()
{
    return age;
}
