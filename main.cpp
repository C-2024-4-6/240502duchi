#include "student.h"
#include <iostream>

using namespace std;

int main() {
    Student stud; 
    stud.set_value(007, "tcg", 'm'); 
    stud.display(); 

    Student stud1(007, "tcg", 'm'); 
    stud1.display(); 

    return 0;
}
