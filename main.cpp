#include <bits/stdc++.h>
#include "Student.h"
#include "Course.h"
#include "GraduateStudent.h"
#include "NormalStudent.h"
#include "SemesterManagement.h"

using namespace std;

/*class Person{
protected:
    string Name;
    int Age;
public:
    Person(){
        Name = "noname";
        Age = 0;
    }
    Person(string Name,int Age){
        this->Name = Name;
        this->Age = Age;
    }
};

class Farmer:public Person{
public:
    Farmer(string n,int a){
        Name = n;
        Age = a;
    }
    void Display(){
        cout<<Name << " "<<Age<<endl;
    }
};
*/
int main() {
    NormalStudent s1("mohamed",1,6);
    Course csCourse("sc",1.5,1.5,1.5),englishCourse("English",1.5,3,1.5);
    Course managementCourse("Management",1.5,1.5,1.5),programmingCourse("Programming",1.5,1.5,1.5);
    s1.AddNewCourse(csCourse);
    s1.AddNewCourse(managementCourse);
    s1.AddNewCourse(englishCourse);

    NormalStudent s2;
    s2 = s1;
    s2.SetStudentName("ahmed");
    s2.SetStudentLevel(2);
    s2.SetTotalCourses(7);
    s2.AddNewCourse(programmingCourse);

    GraduateStudent s3("ibrahim",1,6);
    s3.AddNewCourse(csCourse);
    s3.AddNewCourse(englishCourse);
    s3.AddNewCourse(managementCourse);

    SemesterManagement sm(3);
    sm.AddStudent(&s1);
    sm.AddStudent(&s2);
    sm.AddStudent(&s3);
    sm.PrintReport();

   /* Course x("cs",1.5,1.5,1.5);
    NormalStudent s("mahmoud",1,1);
    s.AddNewCourse(x);
    SemesterManagement ss(1);
    ss.AddStudent(&s);
    ss.PrintReport();*/
}
