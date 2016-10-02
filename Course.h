#ifndef COURSE_H_
#define COURSE_H_
#include "Course.h"
#include <bits/stdc++.h>
using namespace std;

class Course {
protected:
	string CourseName;
	double LectureTime;
	double SectionTime;
	double Labtime;
public:
	Course();
	Course(string CourseName,double LectureTime,double SectionTime,double LabTime);
	void SetCourseName(string CourseName);
	void SetLectureTime(double LectureTime);
	void SetSectionTime(double SectionTime);
	void SetLabTime(double LabTime);
	string GetCourseName();
	double GetLectureTime();
	double GetSectionTime();
	double GetLabTime();
	virtual ~Course();
};

#endif /* COURSE_H_ */
