#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
private:
    static int studentCount;

    std::string fullName;
    std::string birthDate;
    std::string contactNumber;
    std::string city;
    std::string country;
    std::string schoolName;
    std::string schoolCity;
    std::string schoolCountry;
    std::string groupNumber;

public:
    Student();
    ~Student();

    void inputData();
    void displayData() const;

    std::string getFullName() const;
    std::string getBirthDate() const;
    std::string getContactNumber() const;
    std::string getCity() const;
    std::string getCountry() const;
    std::string getSchoolName() const;
    std::string getSchoolCity() const;
    std::string getSchoolCountry() const;
    std::string getGroupNumber() const;

    static int getStudentCount();
};

#endif 
