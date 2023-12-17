#include "classroom.h"

ClassRoom::ClassRoom()
{
    objStudent = new Student;
    objTeacher = new Teacher;
}

ClassRoom::~ClassRoom()
{
    delete objStudent;
    delete objTeacher;
    objStudent=nullptr;
    objTeacher=nullptr;
}

string ClassRoom::getClassroomName() const
{
    return classroomName;
}

void ClassRoom::setClassroomName(const string &newClassroomName)
{
    classroomName = newClassroomName;
}
