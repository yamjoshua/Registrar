//
//  Student.h
//  rec07
//
//  Created by Joshua Yam on 3/11/18.
//  Copyright © 2018 Joshua Yam. All rights reserved.
//

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include <iostream>

#include "Course.h"

namespace BrooklynPoly{
    class Course;
    
    class Student{
        friend std::ostream& operator << (std::ostream& os, const Student& rhs); //Overloading the Output Operator
        
    public:
        Student(const std::string& name);//Student Constructor
        const std::string& getStudentName() const; //Returns the Student's Name
        void addCourse(Course* oneCourse);//Adds a course for the Student
        void dropCourse(Course* oneCourse);//Drops Course for the Student
    private:
        std::string studentName;
        std::vector <Course*> courses;
    };
}

#endif 
