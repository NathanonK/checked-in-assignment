#include "Course.h"

Course::Course() : courseNumber(""), courseTitle("") {}

Course::Course(string number, string title) : courseNumber(number), courseTitle(title) {}

void Course::SetCourseNumber(string number) 
{
    courseNumber = number;
}

void Course::SetCourseTitle(string title) 
{
    courseTitle = title;
}

string Course::GetCourseNumber() const 
{
    return courseNumber;
}

string Course::GetCourseTitle() const 
{
    return courseTitle;
}

void Course::PrintInfo() const 
{
    cout << "Course Number: " << courseNumber << endl;
    cout << "Course Title: " << courseTitle << endl;
}
