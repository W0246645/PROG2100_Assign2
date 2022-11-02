#include "Student.h"

int main() {
    while (true) {
        string name = "";
        std::cout << "Please enter the first student's name or \"quit\" to quit." << std::endl;
        cin >> name;
        if (name == "quit") {
            break;
        }
        Student student1 = Student(name);
        bool stop = false;
        while (!stop) {
            string course = "";
            std::cout << "Please enter one of " << student1.GetName() << "'s courses or enter \"Q\" if you are done."
                      << std::endl;
            cin >> course;
            if (::toupper(course[0]) == 'Q' && course[1] == '\0') {
                stop = true;
            } else {
                student1.AddCourse(course);
            }
        }

        name = "";
        std::cout << "Please enter the second student's name or \"quit\" to quit." << std::endl;
        cin >> name;
        if (name == "quit") {
            break;
        }

        Student student2 = Student(student1);
        student2.SetName(name);

        student1.ResetCourses();
        std::cout << student1 << "\n" << std::endl;
        std::cout << student2 << std::endl;

        Student student3;
        student3 = student2;
        std::cout << student3 << std::endl;
    }

    return 0;
}
