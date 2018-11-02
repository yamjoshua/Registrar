//
//  Course.h
//  rec07
//
//  Created by Joshua Yam on 3/11/18.
//  Copyright © 2018 Joshua Yam. All rights reserved.
//

#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include <iostream>

#include "Student.h"

namespace BrooklynPoly{
    class Student;
    
    class Course{
        friend std::ostream& operator << (std::ostream& os, const Course& rhs);//Overloading Output Operator
    public:
        Course(const std::string& name);//Constructor
        const std::string& getName() const;//Returns Course Name
        void addStudent(Student* newStudent);//Adds student to course
        void dropStudent(Student* droppingStudent);//Drops student from Course
        
    private:
        std::string courseName;
        std::vector <Student*> courseStudent;
    };
}


#endif /* Course_h */
