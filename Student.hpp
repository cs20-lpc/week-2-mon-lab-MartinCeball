#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>


using namespace std;


class Student {
private:

    string* name;
    int* age;

public:

    Student();


    ~Student();


    void setName(string s);

    void setAge(int i);


    string getName() const;


    int getAge() const;
};

#endif // STUDENT_HPP
