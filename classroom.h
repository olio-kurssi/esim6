#ifndef CLASSROOM_H
#define CLASSROOM_H

#include "student.h"
#include "teacher.h"

#include <iostream>

using namespace std;

class ClassRoom
{
public:
    ClassRoom();
    ~ClassRoom();
    string getClassroomName() const;
    void setClassroomName(const string &newClassroomName);
    Student *objStudent1;
    Student *objStudent2;
    Teacher *objTeacher;
    void showClassroomData();

private:
    string classroomName;
};

#endif // CLASSROOM_H
