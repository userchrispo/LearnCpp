#include <iostream>
#include <ctime>

int main() {
    srand(time(0));

    int randNum = rand() % 5 + 1;

    switch(randNum) {
        case 1: std::cout << "you win"; break;
        case 2: std::cout << "you dont win"; break;
        case 3:  std::cout << "you dont win"; break;
        case 4:  std::cout << "you dont win"; break;
        case 5:  std::cout << "you dont win"; break;

    };
}
    