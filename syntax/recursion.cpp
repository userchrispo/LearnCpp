#include <iostream>

void walk(int steps);

int factorial(int num);


int main()
{
    walk(10);
    return 0;

}
void walk(int steps)
{

    if (steps > 0)
    {
        std::cout << "you take a step!\n";
        walk(steps - 1);
    }

    return;
}

int factiorial(int num) {

    if (num > 1) {
    return  num * factorial(num - 1);
    }
    else {
        return 1;
    }

}