#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    double temp;
    char unit;

    cout << "************ Temperature Conversion *************\n";
    cout << "F = Fahrenheit\n";
    cout << "C = Celsius\n";

    cout << "\nWhat Unit would you like to convert to?: ";
    cin >> unit;

    if (unit == 'F' || unit == 'C')
    {
        if (unit == 'C')
        {
            cout << "\nEnter Temperature in Fahrenheit: ";
            cin >> temp;
            temp = (temp - 32) * 5 / 9;
            cout << "\nCelsisus: "
                 << temp << '\n';
        }
        else
        {
            cout << "\nEnter Temperature in Celsisus: ";
            cin >> temp;
            temp = ((9 / 5) * temp) + 32;
            cout << "\nFahrenheit: "
                 << temp << '\n';
        }
    }
    else
    {
        cout << "Error user did not enter correct unit\n";
    }

    cout << "***********************************************";
}