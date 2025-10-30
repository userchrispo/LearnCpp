#include <iostream>

int main() {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.empty()) {
        return 0;
    }
    if (name.length() > 12) {
        std::cout << "your name cant be over 12 characters";
    }
    else {
        std::cout << "congrats " << name << '\n';
    }

   //  name.append("@gmail.com");
   // name.clear();
   // name.at(0);
   // name.empty();
   // name.insert(0,"@");
   // name.find(' ');
   // name.erase(0,3);

   

    return 0;

}