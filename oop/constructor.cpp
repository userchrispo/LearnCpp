#include <iostream>
// constructor =. special method that is automatically caled when an object is instantiated
class Student
{
public:
    std::string name;
    int age;
    double gpa;

    Student(std::string name, int age, double gpa)
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main()
{

    Student student1("lado", 21, 12.00);

    std::cout << student1.name << '\n';

    return 0;
}