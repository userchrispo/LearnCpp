#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ifstream iFile;
    ofstream oFile;

    iFile.open("nums.txt");

    if (!iFile.is_open())
    {
        cout << "Error Occured, Input File could not be opened";
        return 0;
    };

    oFile.open("out.txt");

    if (!oFile.is_open())
    {
        cout << "Error Occured, Output File could not be opened";
    };

    int input_file_num;

    while (iFile >> input_file_num)
    {
        oFile << input_file_num * 2 << '\n';
    };

    return 0;
}