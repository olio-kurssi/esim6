#include "teacher.h"

Teacher::Teacher()
{

}

Teacher::Teacher(string n, int b, string d)
{
    this->setName(n);
    this->setBirthYear(b);
    department=d;
}

string Teacher::getDepartment() const
{
    return department;
}

void Teacher::setDepartment(const string &newDepartment)
{
    department = newDepartment;
}
