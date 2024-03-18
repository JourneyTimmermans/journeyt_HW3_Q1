//
// Created by journ on 3/17/2024.
//

#include "Employee.h"

Employee::Employee() : Person() {}

Employee::Employee(std::string first, std::string last, int year, int day, int month, double salary)
        : Person(first, last, year, day, month), salary(salary) {}

void Employee::setSalary(double newSalary) {
    salary = newSalary;
}

double Employee::getSalary() {
    return salary;
}