#include <iostream>

int main()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            if (i == 0 || i == 3) {
                std::cout << '*';
            }

            else if (j == 0 || j == 9) {
                std::cout << '*';
            }
            else {
                std::cout << ' ';
            }
        

           
        }
        std::cout << '\n';
    }
}