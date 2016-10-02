#include "GraduateStudent.h"
#include <bits/stdc++.h>
using namespace std;
GraduateStudent::GraduateStudent()
{
    //ctor
}
GraduateStudent::GraduateStudent(string Name,int Level,int Total):Student(Name,Level,Total){
}

double GraduateStudent::CalculateTotalHours(){
    double Total =0.0;
    for(int i=0;i<TotalNumberOfCourses;i++){
        Total += Courses[i].GetLabTime()*2 + Courses[i].GetLectureTime()*2;
    }
    return Total;
}
GraduateStudent::~GraduateStudent()
{
    //dtor
}
