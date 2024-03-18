#ifndef HW3FILES_EMPLOYEE_H
#define HW3FILES_EMPLOYEE_H

#include "Person.h"

class Employee : public Person {
public:
    Employee();
    Employee(std::string first, std::string last, int year, int day, int month, double salary);
    void setSalary(double newSalary);
    double getSalary();
private:
    double salary = 0.0;
};



#endif //HW3FILES_EMPLOYEE_H
