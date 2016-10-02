#ifndef GRADUATESTUDENT_H
#define GRADUATESTUDENT_H
#include <bits/stdc++.h>
#include "Student.h"
#include "GraduateStudent.h"
using namespace std;
class GraduateStudent : public Student
{
public:
    GraduateStudent();
    GraduateStudent(string Name,int Level ,int Total);
    double CalculateTotalHours();
    ~GraduateStudent();


};

#endif // GRADUATESTUDENT_H
