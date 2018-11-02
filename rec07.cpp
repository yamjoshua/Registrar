//
//  main.cpp
//  rec07
//
//  Created by Joshua Yam on 3/9/18.
//  Copyright © 2018 Joshua Yam. All rights reserved.
//

#include "Registrar.h"
#include <iostream>
#include <vector>
#include <string>
using namespace BrooklynPoly;
using namespace std;


int main() {
    
    Registrar registrar;
    
    cout << "No courses or students added yet\n";
    //    registrar.printReport(); //
    cout << registrar << endl;
    
    cout << "AddCourse CS101.001\n";
    registrar.addCourse("CS101.001");
    cout << registrar << endl;
    
    cout << "AddStudent FritzTheCat\n";
    registrar.addStudent("FritzTheCat");
    cout << registrar << endl;
    
    
    
    cout << "AddCourse CS102.001\n";
    registrar.addCourse("CS102.001");
    cout << registrar << endl;
    
    
    cout << "EnrollStudentInCourse FritzTheCat CS102.001\n";
    registrar.enrollStudentInCourse("FritzTheCat", "CS102.001");
    cout << "EnrollStudentInCourse FritzTheCat CS101.001\n";
    registrar.enrollStudentInCourse("FritzTheCat", "CS101.001");
    cout << registrar << endl;
    
    
    
    cout << "EnrollStudentInCourse Bullwinkle CS101.001\n";
    cout <<  "Should fail, i.e. do nothing, since Bullwinkle is not a student.\n";
    registrar.enrollStudentInCourse("Bullwinkle", "CS101.001");
    cout << registrar << endl;
    
    
    
    cout << "CancelCourse CS102.001\n";
    registrar.cancelCourse("CS102.001");
    cout << registrar << endl;
    
    
    /*
     // [OPTIONAL - do later if time]
     cout << "ChangeStudentName FritzTheCat MightyMouse\n";
     registrar.changeStudentName("FritzTheCat", "MightyMouse");
     cout << registrar << endl;  // or registrar.printReport()
     
     cout << "DropStudentFromCourse MightyMouse CS101.001\n";
     registrar.dropStudentFromCourse("MightyMouse", "CS101.001");
     cout << registrar << endl;  // or registrar.printReport()
     
     cout << "RemoveStudent FritzTheCat\n";
     registrar.removeStudent("FritzTheCat");
     cout << registrar << endl;  // or registrar.printReport()
     
     
     cout << "Purge for start of next semester\n";
     registrar.purge();
     registrar.printReport(); // or cout << registrar << endl;
     //    cout << registrar << endl;  // or registrar.printReport()
     */
    
}









