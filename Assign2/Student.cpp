//
// Created by paper on 2022-11-01.
//

#include "Student.h"

Student::Student(string name) {
    this->name = name,
    this->numCourses = 0,
    this->courseList = new vector<string>();
}

Student::~Student() {
    std::cout << "Destructor fired" << std::endl;
    if (this->courseList != nullptr) {
        this->courseList->clear();
        this->courseList = nullptr;
    }
}

Student::Student(Student& student) {
    std::cout << "Copy constructor fired" << std::endl;
    this->name = student.name;
    this->numCourses = student.numCourses;
    this->courseList = student.courseList;
}

Student Student::operator=(Student& student) {
    std::cout << "Assignment operator fired" << std::endl;
    this->name = student.name;
    this->numCourses = student.numCourses;
    this->courseList = student.courseList;
    return *this;
}

ostream& operator<<(ostream& output, Student& student) {
    output << "Student: " << student.name << "\n" << student.numCourses << " Courses.";
    vector<string>& vecRef = *student.courseList;
    for(int i = 0; i < student.numCourses; i++) {
        output << "\n- ";
        output << vecRef[i];
    }
    return output;
}

string Student::GetName() {
    return this->name;
}

void Student::SetName(string name) {
    this->name = name;
}

void Student::ResetCourses() {
    this->numCourses = 0;
    this->courseList->clear();
}

void Student::AddCourse(string course) {
    this->courseList->push_back(course);
    this->numCourses = this->courseList->size();
}



