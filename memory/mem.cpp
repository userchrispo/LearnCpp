#include <iostream>
using namespace std;

void swapit(string &x, string &y);

/* void printInfo(const string name, const int age);
Making the function read only so user cant accidently change name and age
useful for references and pointers so no one can change the values it is pointing towards.
*/

// pointers = variable that stores a memory address of another variable, sometimes its easier to work with an address 


int main()
{

    // memmory address = a location in memory where data is stored
    // a memory address can accessed with & (adress-of operator)

   /*  string x = "Kool-Aid";
    string y = "Water";

    swapit(x, y);

    cout << "X: " << x << '\n';
    cout << "Y: " << y << '\n';

    return 0;

    */

   string name[] = {"bro","sis","dad"};







}

void swapit(string &x, string &y)
{
    string temp;

    temp = x;
    x = y;
    y = temp;
}
