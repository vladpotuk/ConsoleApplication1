#include "Student.h"

int Student::studentCount = 0;

Student::Student() {
    studentCount++;
}

Student::~Student() {
    studentCount--;
}

void Student::inputData() {
    std::cout << "Enter full name: ";
    std::getline(std::cin, fullName);
}

void Student::displayData() const {
    std::cout << "Student Information:\n";
    std::cout << "Full Name: " << fullName << std::endl;
    std::cout << "Birth Date: " << birthDate << std::endl;
    std::cout << "Contact Number: " << contactNumber << std::endl;
    std::cout << "City: " << city << std::endl;
    std::cout << "Country: " << country << std::endl;
    std::cout << "School Name: " << schoolName << std::endl;
    std::cout << "School City: " << schoolCity << std::endl;
    std::cout << "School Country: " << schoolCountry << std::endl;
    std::cout << "Group Number: " << groupNumber << std::endl;
}

std::string Student::getFullName() const {
    return fullName;
}

std::string Student::getBirthDate() const {
    return birthDate;
}

std::string Student::getContactNumber() const {
    return contactNumber;
}

std::string Student::getCity() const {
    return city;
}

std::string Student::getCountry() const {
    return country;
}

std::string Student::getSchoolName() const {
    return schoolName;
}

std::string Student::getSchoolCity() const {
    return schoolCity;
}

std::string Student::getSchoolCountry() const {
    return schoolCountry;
}

std::string Student::getGroupNumber() const {
    return groupNumber;
}

int Student::getStudentCount() {
    return studentCount;
}
