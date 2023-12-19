#include "classroom.h"
#include "student.h"
#include "teacher.h"

#include <iostream>

using namespace std;

int main()
{

    ClassRoom *objectClassroom = new ClassRoom;
    objectClassroom->setClassroomName("5b301");

    objectClassroom->objStudent1->setName("Teppo Testi");
    objectClassroom->objStudent1->setBirthYear(1999);
    objectClassroom->objStudent1->setGroupName("tvt23spl");

    objectClassroom->objStudent2->setName("Liisa Joki");
    objectClassroom->objStudent2->setBirthYear(1998);
    objectClassroom->objStudent2->setGroupName("tvt23sp0");

    objectClassroom->objTeacher->setName("Mauno Opettaja");
    objectClassroom->objTeacher->setBirthYear(1982);
    objectClassroom->objTeacher->setDepartment("Tietotekniikka");

    objectClassroom->showClassroomData();

    delete objectClassroom;
    objectClassroom=nullptr;
    return 0;
}
