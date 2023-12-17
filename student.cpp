#include "student.h"

Student::Student()
{

}

Student::Student(string n, int b, string g)
{
    this->setName(n);
    this->setBirthYear(b);
    groupName=g;
}

string Student::getGroupName() const
{
    return groupName;
}

void Student::setGroupName(const string &newGroupName)
{
    groupName = newGroupName;
}
