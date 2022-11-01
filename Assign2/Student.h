#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef ASSIGN2_STUDENT_H
#define ASSIGN2_STUDENT_H


class Student {
private:
    string name;
    int numCourses;
    vector<string> *courseList;
public:
    Student(string name);
    ~Student();
    Student(Student&);
    Student operator=(Student&);
    friend ostream& operator<<(ostream&, Student&);
    string GetName();
    void SetName(string name);
    void ResetCourses();
    void AddCourse(string);
};


#endif //ASSIGN2_STUDENT_H
