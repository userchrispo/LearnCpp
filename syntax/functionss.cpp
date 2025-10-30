#include <iostream>

void happyBirthday()
{
    std::cout << "\nHappy birthday to you!\n";
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday to you!" << '\n';
}

std::string firstandlast(std::string string1, std::string string2);
double square(double length);

int main()
{

    happyBirthday();
    happyBirthday();
    happyBirthday();
    std::string name = firstandlast("lado","logga");
    std::cout << "Hello " <<  name;
}

double square(double length)
{
    return length * length;
}

std::string firstandlast(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}