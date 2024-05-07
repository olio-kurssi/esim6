#ifndef CLASSROOM_H
#define CLASSROOM_H

#include "student.h"
#include "teacher.h"

#include <iostream>
#include <memory>

using namespace std;

class ClassRoom
{
public:
    ClassRoom();
    ~ClassRoom();
    string getClassroomName() const;
    void setClassroomName(const string &newClassroomName);
    void setClassRoomPersons();
    void showClassroomData();

private:
    string classroomName;
    unique_ptr<Student> objStudent1;
    unique_ptr<Student> objStudent2;
    unique_ptr<Teacher> objTeacher;
};

#endif // CLASSROOM_H
