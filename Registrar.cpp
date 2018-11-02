//
//  Registrar.cpp
//  rec07
//
//  Created by Joshua Yam on 3/11/18.
//  Copyright © 2018 Joshua Yam. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

#include "Course.h"
#include "Student.h"
#include "Registrar.h"

using namespace std;

namespace BrooklynPoly {
    void Registrar::addCourse(const string& course){
        Course* aClass = new Course(course);
        classes.push_back(aClass);
    }
    
    void Registrar::addStudent(const string& student){
        Student* aStudent= new Student(student);
        students.push_back(aStudent);
    }
    
    void Registrar::enrollStudentInCourse(const string& Student, const string& Course){
        size_t indexS = students.size();
        size_t indexC = classes.size();
        for (size_t i = 0; i<classes.size(); ++i){
            if (classes[i]->getName()==Course){
                indexC=i;
            }
        }
        for (size_t i = 0; i<students.size(); ++i){
            if (students[i]->getStudentName()==Student){
                indexS=i;
            }
        }
        if (indexS == students.size()){
            cerr << "Student not found" <<endl;
        }
        if (indexC == classes.size()){
            cerr << "Class not found" << endl;
        }
        if (indexS!=students.size() && indexC != classes.size()){
            classes[indexC]->addStudent(students[indexS]);
            students[indexS]->addCourse(classes[indexC]);
        }
    }
    
    void Registrar::cancelCourse(const string& Course){
        for (size_t i =0 ; i<classes.size();++i){
            if (classes[i]->getName()==Course){
                classes[i]=classes[classes.size()-1];
                delete classes[classes.size()-1];
                classes[classes.size()-1]=nullptr;
                classes.pop_back();
            }
        }
    }
    
    void Registrar::purge(){
        for (size_t i = 0; i<classes.size();++i){
            delete classes[i];
            classes[i]=nullptr;
        }
        classes.clear();
        for (size_t i = 0; i<students.size(); ++i){
            delete students[i];
            students[i]=nullptr;
        }
        students.clear();
    }
    ostream& operator << (ostream& os, Registrar& rhs){
        os << "Courses: " << endl;
        if (rhs.classes.size()==0){
            os << "No Classes" << endl;
        }
        else{
            for (size_t i = 0; i<rhs.classes.size(); ++i){
                os << *rhs.classes[i] << endl;
            }
        }
        return os;
    }
   
}




