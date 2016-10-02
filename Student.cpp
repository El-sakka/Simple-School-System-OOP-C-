#include "Student.h"
#include <bits/stdc++.h>

using namespace std;

Student::Student(){
	StudentName = "No Name";
	StudentLevel = 0;
	TotalNumberOfCourses=0;
	Courses = new Course[TotalNumberOfCourses];
}

Student::Student(string Name,int level,int total){
	StudentName = Name;
	StudentLevel = level;
	TotalNumberOfCourses = total;
	Courses = new Course[TotalNumberOfCourses];
}

Student::Student(const Student &student){
	StudentName = student.StudentName;
	StudentLevel = student.StudentLevel;
	TotalNumberOfCourses = student.TotalNumberOfCourses;
	Courses = new Course[TotalNumberOfCourses];
	for(int i=0;i<student.TotalNumberOfCourses;i++){
		Courses[i]= student.Courses[i];
	}
}

void Student::operator =(const Student &s){
	StudentName = s.StudentName;
	StudentLevel =s.StudentLevel;
	TotalNumberOfCourses = s.TotalNumberOfCourses;
	Courses = new Course[TotalNumberOfCourses];
	for(int i=0;i<s.TotalNumberOfCourses;i++){
		Courses[i]=s.Courses[i];
	}
}
void Student::AddNewCourse(Course NewCourse){
	Courses[Index]=NewCourse;
	Index ++;
}

void Student::SetStudentName(string Name){
	StudentName = Name;
}
void Student::SetStudentLevel(int Level){
	StudentLevel = Level;
}
void Student::SetTotalCourses(int Total){
	TotalNumberOfCourses = Total;
}

string Student::GetStudentName(){
	return StudentName;
}
int Student::GetStudentLevel(){
	return StudentLevel;
}
int Student::GetTotalNumberOfCourses(){
	return TotalNumberOfCourses;
}

void Student::View(){
	cout<<StudentName<<" "<<StudentLevel<<" "<<TotalNumberOfCourses<<endl;
	cout<<Courses->GetCourseName();
}

Student::~Student() {
	// TODO Auto-generated destructor stub
	delete [] Courses;
}
