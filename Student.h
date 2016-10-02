#ifndef STUDENT_H_
#define STUDENT_H_
#include "Student.h"
#include "Course.h"
#include <bits/stdc++.h>
using namespace std;


class Student{
protected:
	string StudentName;
	int StudentLevel;
	Course *Courses;
	int TotalNumberOfCourses;
	int Index =0;
public:
	Student();
	Student(string Name,int level,int total);
	Student(const Student &student);
	void operator=(const Student &s);
	void AddNewCourse(Course NewCourse);
	virtual double CalculateTotalHours() =0;
	void SetStudentName(string name);
	void SetStudentLevel(int level);
	void SetTotalCourses(int Total);
	string GetStudentName();
	int GetStudentLevel();
	int GetTotalNumberOfCourses();
	void View();
	virtual ~Student();
};

#endif /* STUDENT_H_ */
