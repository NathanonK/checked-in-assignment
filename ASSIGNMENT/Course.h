#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

using namespace std;

class Course 
{
    public:
        Course(); 
        Course(string number, string title); 
        
        void SetCourseNumber(string number);
        void SetCourseTitle(string title);

        string GetCourseNumber() const;
        string GetCourseTitle() const;

        void PrintInfo() const;

    private:
        string courseNumber;
        string courseTitle;
};

#endif
