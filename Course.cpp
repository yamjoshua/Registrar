//
//  Course.cpp
//  rec07
//
//  Created by Joshua Yam on 3/11/18.
//  Copyright © 2018 Joshua Yam. All rights reserved.
//

#include <vector>
#include <string>
#include <iostream>

#include "Student.h"
#include "Course.h"

using namespace std;
namespace BrooklynPoly{
    Course::Course(const string& name): courseName(name){}
    
    void Course::dropStudent(Student* droppingStudent){
        for (size_t i = 0; i<courseStudent.size(); ++i){
            if (courseStudent[i]==droppingStudent){
                courseStudent[i]=courseStudent[courseStudent.size()-1];
                courseStudent.pop_back();
            }
        }
    }
    
    void Course::addStudent(Student* newStudent){courseStudent.push_back(newStudent);}
    
    const string& Course::getName() const {return courseName;}
    
    ostream& operator << (ostream& os, const Course& rhs){
        os << rhs.getName() <<": ";
        for (size_t i = 0; i<rhs.courseStudent.size(); ++i){
            os <<rhs.courseStudent[i]->getStudentName() << ", ";
        }
        return os;
    }

}
