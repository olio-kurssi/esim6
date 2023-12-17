#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>

using namespace std;
#include "person.h"



class Teacher : public Person
{
public:
    Teacher();
    Teacher(string n, int b, string d);
    string getDepartment() const;
    void setDepartment(const string &newDepartment);

private:
    string department;
};

#endif // TEACHER_H
