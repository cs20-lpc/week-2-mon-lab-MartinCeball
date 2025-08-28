#include "Student.hpp"

Student::Student() {

    name = new string;
    age  = new int;

    *name = "N/A";
    *age  = 0;

    cout << "Student object created!" << endl;
}


Student::~Student() {
    delete name;
    delete age;
    name = nullptr;
    age  = nullptr;

    cout << "Student object destroyed!" << endl;
}


void Student::setName(string s) {
    *name = s;
}


void Student::setAge(int i) {
    *age = i;
}

string Student::getName() const {
    return *name;
}


int Student::getAge() const {
    return *age;
}

