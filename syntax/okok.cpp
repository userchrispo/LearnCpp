#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    //   double x = 3.5;
    //     double y = 4;
    //    double z = std::max(x, y);
    //  z = abs(-3);
    //  z = round(x);
    //  z = ceil(x);

    //   cout << z << '\n';

    int age;

    /* cout << "Enter your age: ";
     std::cin >> age;

     if (age >= 18) {
         cout << "Welcome to the site" << '\n';
     }
     else {
         cout << "User is too young." << '\n';
     };

     return 0;

     */

    int month;
    cout << "What month is it: ";
    cin >> month;

    /*  switch (month)
     {

     case 1:
         cout << "Month is Janurary" << '\n';
         break;

     case 2:
         cout << "Month is Feb" << '\n';
         break;

     case 3:
         cout << "Month is March" << '\n';
         break;

     case 4:
         cout << "Month is Aprill" << '\n';
         break;
     case 5:
         cout << "Month is May" << '\n';
         break;

     default:
         cout << "Enter numbers through 1-5" << '\n';
     }
         */

    int grade = 25;
    int number = 8;
    bool bro = true;
    // grade >= 60 ? cout << "you pass!" : cout << "you failed";

   //  number > 8 ? cout << "true" : cout << "false bro";

    if (bro && number == 8 || bro && number == 2) {
        cout << "Bro is true" << '\n';
    };
}