#include "OfferedCourse.h"

OfferedCourse::OfferedCourse() : Course(), instructorName(""), location(""), classTime("") {}

OfferedCourse::OfferedCourse(string number, string title, string instructor, string loc, string time) 
    : Course(number, title), instructorName(instructor), location(loc), classTime(time) {}

void OfferedCourse::SetInstructorName(string name) 
{
    instructorName = name;
}

void OfferedCourse::SetLocation(string loc) 
{
    location = loc;
}

void OfferedCourse::SetClassTime(string time) 
{
    classTime = time;
}

string OfferedCourse::GetInstructorName() const 
{
    return instructorName;
}

string OfferedCourse::GetLocation() const 
{
    return location;
}

string OfferedCourse::GetClassTime() const 
{
    return classTime;
}

void OfferedCourse::PrintInfo() const 
{
    Course::PrintInfo();
    cout << "   Instructor Name: " << instructorName << endl;
    cout << "   Location: " << location << endl;
    cout << "   Class Time: " << classTime << endl;
}
