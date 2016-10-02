#ifndef NORMALSTUDENT_H
#define NORMALSTUDENT_H
#include "NormalStudent.h"
#include "Student.h"
#include <bits/stdc++.h>
using namespace std;

class NormalStudent : public Student
{
public:
    //NS --> Normal Student
    NormalStudent();
    NormalStudent(string NSName,int NSLevel,int NSTotal);
    double CalculateTotalHours();
    ~NormalStudent();


};

#endif // NORMALSTUDENT_H
