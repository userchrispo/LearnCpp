#include <iostream>
#include <vector>

namespace first
{
    int bl = 0;
}

namespace second
{
    int bl = 1;
}

int main()
{
    using std::cout;
    using std::string;

    // this is an comment
    cout << "how you doing" << '\n';
    cout << "I'm doing good" << '\n';

    int x;
    int y;
    x = 5;
    y = 20;
    int sum = x + y;
    cout << x << '\n';
    cout << sum << '\n';

    int age = 23;
    int year = 2025;

    // doubles
    double price = 7.5;

    cout << price << '\n';

    double gpa = 3.1;
    // char datatype

    char grade = 'A';
    char inital = 'L';

    // booleans

    bool student = true;

    if (student == true)
    {
        std::cout << "yes theres an student" << '\n';
    }

    // Strings
    string name = "LadoLogga";
    cout << name << '\n';

    string day = "friday";
    string favFood = "pizza";
    string time = "7:23PM";

    std::cout << "Hello my name is " << name << " I am " << age << " years old" << "\n";

    // constants

    const double PI = 3.14;
    const int LIGHT_SPEED = 382;

    cout << PI << '\n'
         << LIGHT_SPEED << '\n';

    // namespace
    using namespace first;

    cout << bl << '\n';

    // typedef
    //  typedef std::vector<std::pair<std::string, int>> pairlist_t;
    // typedef int number_t;

    using number_t = int;
    using pairlist_t = std::vector<std::pair<std::string, int>>;

    pairlist_t pairlist;

    typedef string text_t;

    text_t typ1 = "example string typedef";
    cout << typ1 << '\n';

    number_t agenow = '20';

    // arithmetic operations

  


    // type conversions

    // implicit

    int da = 3.27;
    cout << da << '\n';

    // explict
    double p = (int) 3.26;

    cout << p << '\n';

    int correct = 8;
    int questions = 10;

    double score = correct/(double)questions * 100;

    std::cout << score << '\n';


    // cout and cin

    string namelol;

    cout << "Whats your name?: ";
    std::cin >> namelol;

    std::cout << "Hello " << namelol << '\n';

    int ageagain;

    cout << "How old are you?: ";

    std::cin >> ageagain;

    cout << "Oh you are " <<  ageagain <<  "years old" << "\n";

    cout << "Brilliant man";

    cout << "Whats your full name?: ";
    std::getline(std::cin >> std::ws, namelol);

    cout << "your full name is " <<  namelol;

    



    return 0;
}