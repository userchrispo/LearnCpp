#include <iostream>
using namespace std;
double getTotal(double prices[], int size);

int main()
{

    string cars[] = {"Corvette", "Mustang", "Camry"};

    cout << cars[0] << '\n';
    cout << cars[1] << '\n';
    cout << cars[2] << '\n';

    double prices[] = {5.00, 7.02, 3.5, 5.55, 9.99};

    int num = 355;
    double num2 = 3.5;
    char cy = 'r';

    cout << "\nSize of Number: " << sizeof(num);
    cout << "\nSize of Double: " << sizeof(num2);
    cout << "\nSize of Character: " << sizeof(cy);

    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    int length = sizeof(grades)/sizeof(char);
    cout <<  "\n" << length << "\n";

    cout << sizeof(grades) / sizeof(char) << "  Amount of Char in Array\n \n \n";
    for(char grade: grades) {
        cout << grade << '\n';
    }
}

double getTotal(double prices[], int size) {

}

  
