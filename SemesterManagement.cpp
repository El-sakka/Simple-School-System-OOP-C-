#include "SemesterManagement.h"

SemesterManagement::SemesterManagement()
{
    TotalNumberOfStudent =0 ;
    student = new Student *[TotalNumberOfStudent];
}

SemesterManagement::SemesterManagement(int t){
    TotalNumberOfStudent = t;
    student = new Student *[TotalNumberOfStudent];
}

void SemesterManagement::AddStudent(Student *s){
    student[counter] = s;
    counter++;
}

void SemesterManagement::PrintReport(){
    for(int i=0;i<counter;i++){
        cout<<"Student Name : "<<student[i]->GetStudentName()<<endl;
        cout<<"Total Houres : "<<student[i]->CalculateTotalHours()<<endl;
    }
}
SemesterManagement::~SemesterManagement()
{
    //dtor
}
