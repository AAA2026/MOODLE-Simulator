#pragma once
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

// the header file contains the class definitionsand the prototypes /


//CStudent class definition;
class CStudent
{
protected://we made it protected in order to make the CPG_Student inhirets it.

    //the private variables
    char student_name[50];
    char student_email_username[10];
    char student_email_password[10];
    char student_major[10];
    float student_grades[5];
    int student_ID;
    float student_score;

public:
    //the public functions

    //constructor:
    CStudent();



    //setters
    void setStudentName(char* studentName);
    void setStudentEmailUsername(char* studentEmailUsername);
    void setStudentPassword(char* studentEmailPassword);
    void setStudentMajor(char* studentMajor);
    void setStudentGrades(float* studentGrades);
    void setStudentID(int studentID);
    void setStudentScore(float studentScore);


    //getters
    char* getStudentName();
    char* getStudentEmailUsername();
    char* getStudentPassword();
    char* getStudentMajor();
    float* getStudentGrades();
    int getStudentID();
    float getStudentScore();

    //register function that prompts the user to enter student data and stores these values for the CStudent class members.

    void registerStudent();

    //get student info function that prints the student's data

    void getStudentInfo();

    //sum items of student_grades[5] and divide the sum over 100 and assign the result to student_score variable

    void calculateGPA();

};

class CCourse
{
private:
    //the private variables
    char course_name[20];
    char course_code[5];
    float course_cost;

public:
    //public functions

    //constructor
    CCourse();

    //setters
    void setCourseName(char* courseName);
    void setCourseCode(char* courseCode);
    void setCourseCost(float courseCost);


    //getters
    char* getCourseName();
    char* getCourseCode();
    float getCourseCost();

    //add course function: which accepts values for course class members and store them
    void AddCourse();

    //get course info function: print the course's details
    void getCourseInfo();


};


class CPG_student :public CStudent   // class derived class name:public parent_class
{
private:
    //private variables 
    char Pg_student_job_title[20];

public:
    //public functions:

    //constructor:
    CPG_student();

    //setters
    void setPgStudentJobTitle(char* PgStudentJobTitle);

    //getters
    char* getPgStudentJobTitle();

};
