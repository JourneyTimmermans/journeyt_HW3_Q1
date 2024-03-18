#ifndef HW3FILES_GRADSTUDENT_H
#define HW3FILES_GRADSTUDENT_H

#include "Student.h"

class GradStudent : public Student {
public:
    GradStudent();
    GradStudent(std::string first, std::string last, int year, int day, int month, int credits, bool canGraduate);
    void setCanGraduate(bool canGrad);
    bool getCanGraduate();

private:
    bool canGraduate = false;
};

#endif //HW3FILES_GRADSTUDENT_H
