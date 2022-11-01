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
    vector<string> courseList;
public:
    Student(string name, int numCourses, vector<string> courseList);
    ~Student();
    Student(Student&);
    Student operator=(Student&);
    string operator<<();
    string GetName();
    void SetName(string name);
    int GetNumCourses();
    void SetNumCourses(int numCourses);
    vector<string> GetCourseList();
    void SetCourseList(vector<string> courseList);
    void ResetCourses();
    void AddCourse(string);
};


#endif //ASSIGN2_STUDENT_H
