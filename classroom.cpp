#include "classroom.h"

ClassRoom::ClassRoom()
{
    objStudent1 = new Student;
    objStudent2 = new Student;
    objTeacher = new Teacher;
}

ClassRoom::~ClassRoom()
{
    delete objStudent1;
    delete objStudent2;
    delete objTeacher;
    objStudent1=nullptr;
    objStudent2=nullptr;
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

void ClassRoom::showClassroomData()
{
    cout<<"Luokkahuone "<<classroomName<<" kokoonpano"<<endl;
    cout<<"Opiskelijat : "<<endl;
    cout<<"- "<<objStudent1->getName()<<", "<<objStudent1->getBirthYear()<<", "<<objStudent1->getGroupName()<<endl;
    cout<<"- "<<objStudent2->getName()<<", "<<objStudent2->getBirthYear()<<", "<<objStudent2->getGroupName()<<endl;
    cout<<"Opettaja : "<<endl;
    cout<<"- "<<objTeacher->getName()<<", "<<objTeacher->getBirthYear()<<", "<<objTeacher->getDepartment()<<endl;

}
