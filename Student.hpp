#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>

using namespace std;


class Student {
private:
    // Private member variables
    string* name;
    int* age;

public:
    // Constructor
    Student();

    // Destructor
    ~Student();

    // Setter for the student's name
    void setName(string s);

    // Setter for the student's age
    void setAge(int i);

    // Getter for the student's name 
    string getName() const;

    // Getter for the student's age
    int getAge() const;
};

#endif // STUDENT_HPP
