#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Student.h"
#include "GradStudent.h"

using namespace std;

int main()
{
    //Creating a person
    Person p1("Tony", "Stark", 1, 21, 1950);
    cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;

    //Creating an employee
    Employee e1("Journey", "Timmermans", 2002, 9, 9, 50000);
    cout << e1.getName() << " born on: " << e1.getBirthdate() << " with salary: " << e1.getSalary() << endl;

    //Creating a student
    Student s1("Ima", "Studente", 1999, 10, 3, 95);
    cout << s1.getName() << " born on: " << s1.getBirthdate() << " with credits: " << s1.getCredits() << endl;

    //Creating a grad student
    GradStudent g1("Graduate", "Student", 1950, 3, 4, 150, true);
    cout << g1.getName() << " born on: " << g1.getBirthdate() << " with credits: " << g1.getCredits() << "and can gradaute? " << g1.getCanGraduate() << endl;

    return 0;
}
