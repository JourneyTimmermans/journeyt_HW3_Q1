#include "GradStudent.h"

GradStudent::GradStudent() : Student() {}

GradStudent::GradStudent(std::string first, std::string last, int year, int day, int month, int credits, bool canGraduate)
        : Student(first, last, year, day, month, credits), canGraduate(canGraduate) {}

void GradStudent::setCanGraduate(bool canGrad) {
    canGraduate = canGrad;
}

bool GradStudent::getCanGraduate() {
    return canGraduate;
}