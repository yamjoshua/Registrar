//
//  Student.cpp
//  rec07
//
//  Created by Joshua Yam on 3/11/18.
//  Copyright © 2018 Joshua Yam. All rights reserved.
//

#include "Student.h"
#include "Course.h"

#include <vector>
#include <string>
#include <iostream>

using namespace std;

namespace BrooklynPoly{
    Student::Student(const string& name): studentName(name){}
    
    ostream& operator << (ostream& os, const Student& rhs){
        os << "Student: " << rhs.getStudentName() <<endl;;
        for (size_t i = 0; i<rhs.courses.size(); ++i){
            if (rhs.courses.size()==0){
                os << " None" << endl;
            }
            else{
                os << " " << rhs.courses[i]->getName();
            }
            os <<endl;
        }
        return os;
    }
    const string& Student::getStudentName() const {return studentName;}
    void Student::addCourse(Course* oneCourse){courses.push_back(oneCourse);}
    void Student::dropCourse(Course* oneCourse){
        for (size_t i = 0; i<courses.size(); ++i){
            if (courses[i]==oneCourse){
                courses[i]=courses[courses.size()-1];
                courses.pop_back();
            }
        }
    }
}

