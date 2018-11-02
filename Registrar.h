//
//  Registar.h
//  rec07
//
//  Created by Joshua Yam on 3/11/18.
//  Copyright © 2018 Joshua Yam. All rights reserved.
//

#ifndef REGISTRAR_H
#define REGISTRAR_H

#include <string>
#include <vector>
#include <iostream>

#include "Student.h"
#include "Course.h"

namespace BrooklynPoly{
    class Course; //Forward Declaration
    class Student;
    
    class Registrar{
        friend std::ostream& operator << (std::ostream& os, Registrar& rhs); //Overloading Output Operator
    public:
        void addCourse(const std::string& course); //Adds a Valid Course to the Heap
        void addStudent(const std::string& student); //Adds a Valid Student onto the Heap
        void enrollStudentInCourse(const std::string& Student,const std::string& Course);//Enrolls a Valid Student in a valid Course
        void cancelCourse(const std::string& Course);//Removes Course from the Heap and Vector
        void purge();//Deletes all Courses and Students
        
    private:
        std::vector<Student*> students;
        std::vector<Course*> classes;
    };
}
#endif

