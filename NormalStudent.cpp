#include "NormalStudent.h"
#include <bits/stdc++.h>
using namespace std;

NormalStudent::NormalStudent():Student()
{
    //ctor
}

NormalStudent::NormalStudent(string NSName,int NSLevel,int NSTotal):Student(NSName,NSLevel,NSTotal){

}

double NormalStudent::CalculateTotalHours(){
    double Total=0.0;
    for(int i=0;i<TotalNumberOfCourses;i++){

        Total += Courses[i].GetLectureTime()*2 + Courses[i].GetLabTime()*1 + Courses[i].GetSectionTime()*1;
    }
    return Total;
}

NormalStudent::~NormalStudent()
{
    //dtor
}
