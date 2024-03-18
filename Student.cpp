#include "Student.h"

Student::Student() : Person() {}

Student::Student(std::string first, std::string last, int year, int day, int month, int credits)
        : Person(first, last, year, day, month), credits(credits) {}

void Student::setCredits(int numCredits) {
    credits = numCredits;
}

int Student::getCredits() {
    return credits;
}