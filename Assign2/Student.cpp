//
// Created by paper on 2022-11-01.
//

#include "Student.h"

Student::Student(string name, int numCourses, vector<string> courseList) {
    this->name = name,
    this->numCourses = numCourses,
    this->courseList = courseList;
}

Student::~Student() = default;

Student::Student(Student& student) {
    this->name = student.name;
    this->numCourses = student.numCourses;
    this->courseList = student.courseList;
}

Student Student::operator=(Student& student) {
    this->name = student.name;
    this->numCourses = student.numCourses;
    this->courseList = student.courseList;
    return *this;
}

string Student::operator<<() {
    string output = "Student: ";
    output += this->name;
    for(int i = 0; i > this->numCourses; i++) {
        output += "\n- ";
        output += this->courseList[i];
    }
    return output;
}

string Student::GetName() {
    return this->name;
}

void Student::SetName(string name) {
    this->name = name;
}

int Student::GetNumCourses() {
    return this->numCourses;
}

void Student::SetNumCourses(int numCourses) {
    this->numCourses = numCourses;
}

vector<string> Student::GetCourseList() {
    return this->courseList;
}

void Student::SetCourseList(vector<string> courseList) {
    this->courseList = courseList;
}

void Student::ResetCourses() {
    this->numCourses = 0;
    this->courseList.clear();
}

void Student::AddCourse(string course) {
    this->courseList.push_back(course);
    this->numCourses = this->courseList.size();
}



