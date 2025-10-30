#include <iostream>

int main() {
    using std::cin;
    using std::cout;
    using std::string;
                
    int adjacent;
    int opposite;
    int hypotenuse;

    cout << "Calculate the Right angle trinagle Hypotenuse" << '\n';
    cout << "Enter the Adjacent side length: ";
    cin >> adjacent;
    cout << "The Adjaceent side length is: " << adjacent << '\n';

    cout << '\n' << "Enter the Opposite side length: ";
    cin >> opposite;
    cout << "The Opposite side length is: " << opposite << '\n';

    hypotenuse = sqrt((pow(adjacent,2) + pow(opposite,2)));

    cout <<  '\n' << "The Hyoptenuse is: " << hypotenuse << '\n';
    




}