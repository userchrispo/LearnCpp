#include <iostream>

enum Day
{

    sunday = 1,
    monday = 2,
    tuesday = 3,
    wednesday = 4,
    thursday = 5,
    friday = 6,
    saturday = 7,
};

int main()
{

    Day today = sunday;

    switch (today)
    {
    case sunday:
        std::cout << "It is Sunday!\n";
        break;

    case monday:
        std::cout << "It is Monday!\n";
        break;
    }

    return 0;
}