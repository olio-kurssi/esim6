#include "classroom.h"
#include "student.h"
#include "teacher.h"

#include <iostream>

using namespace std;

int main()
{

    ClassRoom *objectClassroom = new ClassRoom;
    objectClassroom->setClassroomName("5b301");

    objectClassroom->objStudent->setName("Teppo Testi");
    objectClassroom->objStudent->setBirthYear(1999);
    objectClassroom->objStudent->setGroupName("tvt23spl");

    objectClassroom->objTeacher->setName("Mauno Opettaja");
    objectClassroom->objTeacher->setBirthYear(1982);
    objectClassroom->objTeacher->setDepartment("Tietotekniikka");

    cout<<"Luokkahuoneen "<<objectClassroom->getClassroomName()<<" kokoonpano"<<endl;

    cout<<objectClassroom->objStudent->getName()<<endl;
    cout<<objectClassroom->objStudent->getBirthYear()<<endl;
    cout<<objectClassroom->objStudent->getGroupName()<<endl;
    cout<<"**********************************\n";


    cout<<objectClassroom->objTeacher->getName()<<endl;
    cout<<objectClassroom->objTeacher->getBirthYear()<<endl;
    cout<<objectClassroom->objTeacher->getDepartment()<<endl;
    cout<<"**********************************\n";
    delete objectClassroom;
    objectClassroom=nullptr;
    return 0;
}
