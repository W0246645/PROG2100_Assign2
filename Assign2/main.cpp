#include "Student.h"

int main() {
    string name = "";
    std::cout << "Please enter the first student's name." << std::endl;
    cin >> name;
    Student student1 = Student(name);
    return 0;
}
