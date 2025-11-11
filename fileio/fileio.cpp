#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
    std::ifstream iFile; // input file
    std::ofstream oFile; // output file

    // open files

    iFile.open("matches.csv");
    if (!iFile.is_open()) {
        std::cout << "Error oppening input file!\n";
        return 0;
    }

    oFile.open("out.txt");
    if (!oFile.is_open()) {
        std::cout << "Error opening output file!\n";
        return 0;
    }
    





    // close files when done
    iFile.close();
    oFile.close();

    return 0;
}