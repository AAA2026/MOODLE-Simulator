#include "pch.h"
#include <iostream>
#include<string>
#include"cstudent.h"

int main()
{
    int no_students;
    int no_courses;
    int no_pg;
    char jopTitle[20];
    cout << "enter the number of students: ";
    cin >> no_students;
    cout << "enter the number of courses: ";
    cin >> no_courses;
    cout << "enter the number of PG students: ";
    cin >> no_pg;

    CStudent students[5];
    CCourse courses[5];
    CPG_student pgs[5];

    //to take the inputs from the user

    for (int i = 0;i < no_students;i++)
    {
        students[i].registerStudent();
    }

    for (int i = 0;i < no_courses;i++)
    {
        courses[i].AddCourse();
    }

    for (int i = 0;i < no_pg;i++)
    {
        pgs[i].registerStudent();//modified as it should take the pg data not students if it is left students[i] it will be a logical error.
        cout << "enter the student job title" << endl;
        fgets(jopTitle, sizeof(jopTitle), stdin);
        pgs[i].setPgStudentJobTitle(jopTitle);
    }

    //the output section:

    for (int i = 0;i < no_students;i++)
    {
        cout << "the student number " << i + 1 << " info" << ":" << endl;
        students[i].getStudentInfo();
    }

    for (int i = 0;i < no_courses;i++)
    {
        cout << "the course number " << i + 1 << " info" << ":" << endl;
        courses[i].getCourseInfo();
    }
    for (int i = 0;i < no_pg;i++)
    {
        cout << "the post graduate number " << i + 1 << " info" << ":" << endl;
        pgs[i].getStudentInfo();
        pgs[i].getPgStudentJobTitle();
    }
}



