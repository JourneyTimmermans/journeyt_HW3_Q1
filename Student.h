#ifndef HW3FILES_STUDENT_H
#define HW3FILES_STUDENT_H

#include "Person.h"

class Student : public Person {
public:
    Student();
    Student(std::string first, std::string last, int year, int day, int month, int credits);
    void setCredits(int numCredits);
    int getCredits();
private:
    int credits = 0;
};

#endif //HW3FILES_STUDENT_H
