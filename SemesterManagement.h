#ifndef SEMESTERMANAGEMENT_H
#define SEMESTERMANAGEMENT_H
#include<bits/stdc++.h>
#include "Student.h"
#include "SemesterManagement.h"

using namespace std;

class SemesterManagement
{
    Student **student;
    int counter =0;
    int TotalNumberOfStudent ;
public:
    SemesterManagement();
    SemesterManagement(int t);
    void AddStudent(Student *s);
    void PrintReport();
    ~SemesterManagement();


};

#endif // SEMESTERMANAGEMENT_H
