TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        classroom.cpp \
        main.cpp \
        person.cpp \
        student.cpp \
        teacher.cpp

HEADERS += \
    classroom.h \
    person.h \
    student.h \
    teacher.h

DISTFILES += \
    classdiagram.qmodel
