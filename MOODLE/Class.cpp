#include <iostream>
#include<string>
#include "class.h"

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
    memset(student_grades, 0, sizeof(student_grades));
    student_ID = 0;
    student_score = 0;
}


//register student class:(input from text box then store it for the cstudent class members)

void CStudent::registerStudent(){
    cin >> student_name;
    cin >> student_email_username;
    cin >> student_email_password;
    cin >> student_major;
    cin >> student_ID;
    for (int i = 0; i < 5;i++)
    {
        cin >> student_grades[i];
    }
}

//it will display info in the student display panel GUI
void CStudent::getStudentInfo(){
    cout << student_name;
    cout << student_email_username;
    cout << student_email_password;
    cout << student_major;
    cout << student_ID;
    for (int i = 0; i < 5;i++)
    {
        cout << student_grades[i];
    }
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

//ADD course function: it needs to store values from the textbox then store it in the class (GUI required)
// void AddCourse(){}

// display the course data in the course panel (GUI required)
//void getCourseInfo();

//setters and getters of CStudent  CPG_student

//setter:
void  CPG_student::setPgStudentJobTitle(char* PgStudentJobTitle) { strcpy(Pg_student_job_title, PgStudentJobTitle); }


//getter:
char* CPG_student::getPgStudentJobTitle() { return Pg_student_job_title; }