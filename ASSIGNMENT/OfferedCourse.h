#ifndef OFFEREDCOURSE_H
#define OFFEREDCOURSE_H

#include "Course.h"

class OfferedCourse : public Course 
{
    public:
        OfferedCourse(); 
        OfferedCourse(string number, string title, string instructor, string loc, string time); 

        void SetInstructorName(string name);
        void SetLocation(string loc);
        void SetClassTime(string time);

        string GetInstructorName() const;
        string GetLocation() const;
        string GetClassTime() const;

        void PrintInfo() const;

    private:
        string instructorName;
        string location;
        string classTime;
};

#endif
