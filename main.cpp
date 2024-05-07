#include "classroom.h"

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<ClassRoom> objectClassroom  = make_unique<ClassRoom>();
    objectClassroom->setClassroomName("5b301");
    objectClassroom->setClassRoomPersons();
    objectClassroom->showClassroomData();

    return 0;
}
