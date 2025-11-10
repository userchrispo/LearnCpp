#include <iostream>
using namespace std;
// a structure that groups related variables under one name

struct Student
{
    string name;
    int age;
    double gpa;

};

int
main()
{

    Student student1;

    student1.name = "lado";
    student1.age = 21;
    student1.gpa = 12.00;
 
    cout << student1.name << '\n';
    cout << student1.age << '\n';
}

void printStudent(Student student) {

}