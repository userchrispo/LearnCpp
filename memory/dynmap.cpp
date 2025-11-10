#include <iostream>

int main()
{

    /* Memmory allocated after the program is run, stored in the heap memory, very useful when we dont know how much of an data we want to use and dont know how mauch memory we plan on using, makes it more flexible when accepting users input*/

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "Adresss: " << pNum << '\n';
    std::cout << "Value:  " << *pNum << '\n';

    char *pGrades = NULL;
    int size;

    std::cout << "how many grades to enter in: ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter grade #" << i + 1 << ":  ";
        std::cin >> pGrades[i];
    }

    delete pNum;
}