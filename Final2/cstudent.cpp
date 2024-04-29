#include "pch.h"
#include <iostream>
#include<string>
#include "cstudent.h"
using namespace std;
//function definitions:

//1-cstudent class:
//setters and getters of CStudent class
  //stetters:
void CStudent::setStudentName(char* studentName) { strcpy(student_name, studentName); }
void CStudent::setStudentEmailUsername(char* studentEmailUsername) { strcpy(student_email_username, studentEmailUsername); }
void CStudent::setStudentPassword(char* studentEmailPassword) { strcpy(student_email_password, studentEmailPassword); }
void CStudent::setStudentMajor(char* studentMajor) { strcpy(student_major, studentMajor); }
void CStudent::setStudentGrades(float* studentGrades)
{
    for (int i = 0;i < 5;i++)
        student_grades[i] = studentGrades[i];     //instead of the loop we can use std::copy() syntax--> std::copy(std::begin(arr1), std::end(arr1), std::begin(arr2)); and its found in <algorithm> header. (idea by samer elhossany)
}
void CStudent::setStudentID(int studentID) { student_ID = studentID; }
void CStudent::setStudentScore(float studentScore) { student_score = studentScore; }

//getters


char* CStudent::getStudentName() { return student_name; }
char* CStudent::getStudentEmailUsername() { return student_email_username; }
char* CStudent::getStudentPassword() { return student_email_password; }
char* CStudent::getStudentMajor() { return student_major; }
float* CStudent::getStudentGrades() { return student_grades; }
int CStudent::getStudentID() { return student_ID; }
float CStudent::getStudentScore() { return student_score; }

//constructor
CStudent::CStudent()
{
    strcpy(student_name, "\0");
    strcpy(student_email_username, "\0");
    strcpy(student_email_password, "\0");
    strcpy(student_major, "\0");
    //memset(student_grades, 0, sizeof(student_grades));
    for (int j = 0; j < 5; j++)
    {
        student_grades[j] = 0;
    }
    student_ID = 0;
    student_score = 0;
}


//register student class:(input from text box then store it for the cstudent class members)

void CStudent::registerStudent()
{

    char name[50];
    int ID;
    char pass[10];
    char email_username[10];
    char major[10];
    //float stdGrades[5];

    cout << "Enter the student name: " << endl;
    cin >> name;
    setStudentName(name);

    cout << "Enter the student ID: " << endl;
    cin >> ID;
    setStudentID(ID);

    cout << "Enter the student email username: " << endl;
    cin >> email_username;
    setStudentEmailUsername(email_username);

    cout << "Enter the student major: " << endl;
    cin >> major;
    setStudentMajor(major);

    cout << "Enter the student password: " << endl;
    cin >> pass;
    setStudentPassword(pass);

    cout << "Enter the student grades: " << endl;
    float grade;
    for (int i = 0;i < 5;i++)
    {
        cout << "grade : " << i + 1 << " ";
        cin >> grade;
        student_grades[i] = grade;
    }

    calculateGPA();

}

//it will display info in the student display panel GUI
void CStudent::getStudentInfo()
{
    float* grades = getStudentGrades();
    cout << "------------------------------------------------"<<endl;
    cout << "student name: " << getStudentName() << endl;
    cout << "student email username: " << getStudentEmailUsername() << endl;
    cout << "student password: " << getStudentPassword() << endl;
    cout << "student major: " << getStudentMajor() << endl;
    for (int k = 0; k < 5;k++)
    {
        cout << "student grades: " << grades[k] << endl;
    }
    
    cout << "student ID: " << getStudentID() << endl;
    cout << "student score: " << getStudentScore() << endl;
    cout << "------------------------------------------------"<<endl;



}


// claculate GPA: sum items of student grades array then divide it over 100 then assign the result to student score variable
void CStudent::calculateGPA()
{
    float sum_grades = 0;

    for (int i = 0;i < 5;i++)
        sum_grades += student_grades[i];

    student_score = sum_grades / 100;
}

//2-ccourse class:
  //setters and getters of CCourse class

  //setters:
void CCourse::setCourseName(char* courseName) { strcpy(course_name, courseName); }
void CCourse::setCourseCode(char* courseCode) { strcpy(course_code, courseCode); }
void CCourse::setCourseCost(float courseCost) { course_cost = courseCost; }

//getters:

char* CCourse::getCourseName() { return course_name; }
char* CCourse::getCourseCode() { return course_code; }
float CCourse::getCourseCost() { return course_cost; }

//constructor
CCourse::CCourse()
{
    strcpy(course_name, "\0");
    strcpy(course_code, "\0");
    course_cost = 0;

}

//ADD course function: 
void CCourse::AddCourse()
{
    char courseName[10];
    char courseCode[10];
    float courseCost;
    cout << "enter the course name : " << endl;
    cin >> courseName;
    cout << "enter the course code : " << endl;
    cin >> courseCode;
    cout << "enter the course cost : " << endl;
    cin >> courseCost;
    setCourseName(courseName);
    setCourseCode(courseCode);
    setCourseCost(courseCost);
}


void CCourse::getCourseInfo()
{

    cout << "course name :" << getCourseName() << endl;
    cout << "course code :" << getCourseCode() << endl;
    cout << "course cost :" << getCourseCost() << endl;
    cout << "------------------------------------------------"<<endl;
}

//setters and getters of CStudent  CPG_student
//constructor
CPG_student::CPG_student()
{
    strcpy(student_name, "\0");
    strcpy(student_email_username, "\0");
    strcpy(student_email_password, "\0");
    strcpy(student_major, "\0");
    strcpy(Pg_student_job_title, "\0");
    memset(student_grades, 0, sizeof(student_grades));
    student_ID = 0;
    student_score = 0;


}
//setter:
void  CPG_student::setPgStudentJobTitle(char* PgStudentJobTitle) { strcpy(Pg_student_job_title, PgStudentJobTitle); }


//getter:
char* CPG_student::getPgStudentJobTitle() { return Pg_student_job_title; }