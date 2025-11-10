#include <iostream>
// Abstraction = hiding unecessary data from outside a class
// getter = function that makes a private attribute readable
// setter = function that makes a proviate attribute writeable

class Stove
{
private:
    int temperature = 0;

public:
    Stove(int temperature)
    {
        setTemperature(temperature);
    }

    int getTemperature()
    {
        return temperature;
    }

    void setTemperature(int temperature)
    {

        if (temperature < 0)
        {
            this->temperature = 0;
        }
        else if (temperature >= 10)
        {
            this->temperature = 10;
        }
        else
        {
            this->temperature = temperature;
        }
    }
};
int main()
{

    Stove stove(100);

    std::cout << stove.getTemperature();

    stove.setTemperature(1000);

    return 0;
}