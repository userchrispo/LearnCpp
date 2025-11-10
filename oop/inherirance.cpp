#include <iostream>

// inheritance = A class can receive attributes and methods from another class
//  Childer classes inherit from a parent class
//  Helps to reuse similar code found within multiple classes

class Animal
{
public:
    bool alive = true;

    void eat()
    {
        std::cout << "This Animal is eating\n";
    }
};

class Dog : public Animal
{

    void bark() {
        std::cout << "The dog goes woof!\n";
    }
};

class Cat : public Animal {

    void meow() {
        std::cout << "The cat goes meow!\n";
    }
}

int main()
{

    Dog dog;

    std::cout << dog.alive << '\n';
    dog.eat();

    return 0;
}