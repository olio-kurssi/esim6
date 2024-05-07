#include "classroom.h"

ClassRoom::ClassRoom()
{
    objStudent1=make_unique<Student>();
    objStudent2=make_unique<Student>();
    objTeacher=make_unique<Teacher>();
}

ClassRoom::~ClassRoom()
{

}

string ClassRoom::getClassroomName() const
{
    return classroomName;
}

void ClassRoom::setClassroomName(const string &newClassroomName)
{
    classroomName = newClassroomName;
}

void ClassRoom::setClassRoomPersons()
{
    objStudent1->setName("Teppo Testi");
    objStudent1->setBirthYear(1999);
    objStudent1->setGroupName("tvt23spl");

    objStudent2->setName("Liisa Joki");
    objStudent2->setBirthYear(1998);
    objStudent2->setGroupName("tvt23sp0");

    objTeacher->setName("Mauno Opettaja");
    objTeacher->setBirthYear(1982);
    objTeacher->setDepartment("Tietotekniikka");
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
