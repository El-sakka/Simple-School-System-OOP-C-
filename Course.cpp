#include "Course.h"
#include <bits/stdc++.h>
using namespace std;

Course::Course() {
	CourseName = "NO NAME";
	LectureTime = 0;
	SectionTime = 0;
	Labtime =0;
}

Course ::Course(string CourseName,double LectureTime,double SectionTime,double LabTime){
	this->CourseName = CourseName;
	this->LectureTime = LectureTime;
	this->SectionTime = SectionTime;
	this->Labtime = LabTime;
}

void Course::SetCourseName(string CourseName){
	this->CourseName = CourseName;
}

void Course::SetLectureTime(double LectureTime){
	this->LectureTime = LectureTime;
}

void Course::SetSectionTime(double SectionTime){
	this->SectionTime = SectionTime;
}

void Course::SetLabTime(double LabTime){
	this->Labtime = LabTime;
}

string Course::GetCourseName(){
	return CourseName;
}

double Course::GetLectureTime(){
	return LectureTime;
}

double Course::GetSectionTime(){
	return SectionTime;
}

double Course::GetLabTime(){
	return Labtime;
}


Course::~Course() {
	// TODO Auto-generated destructor stub
}
