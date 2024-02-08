#include "classroom.h"

#include <iostream>

using namespace std;

int main()
{

    ClassRoom *objectClassroom = new ClassRoom;
    objectClassroom->setClassroomName("5b301");
    objectClassroom->setClassRoomPersons();
    objectClassroom->showClassroomData();

    delete objectClassroom;
    objectClassroom=nullptr;
    return 0;
}
