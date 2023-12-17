#include "Student.h"

int main() {
    Student student1;
    student1.inputData();
    student1.displayData();


    std::cout << "Total students: " << Student::getStudentCount() << std::endl;

    return 0;
}
