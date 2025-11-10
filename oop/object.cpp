#include <iostream>
using namespace std;

// object =  a collection of attributes and methods
// they have characteristics and can perform actions. Phone attributes ex. color, size. Phone methods ex. call , text
// Created from a class

// constructor =. special method that is automatically caled when an object is instantiated

class Human
{
public:
    string name;
    string occupation;
    int age;

    void eat(Human human)
    {
        cout << human.name << " is eating!\n";
    }
    void drink(Human human)
    {
        cout << human.name << " is drinking!\n";
    }

    void sleep(Human human)
    {
        cout << human.name << " is sleeping!\n";
    }
};

int main()
{

    Human human1;

    human1.name = "lado";
    human1.occupation = "programmer";
    human1.age = 35;

    cout << human1.name << '\n';
    cout << human1.occupation << '\n';
    cout << human1.age << '\n';

    human1.eat(human1);
    human1.drink(human1);
    human1.sleep(human1);
}