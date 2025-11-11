#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream iFile;

    string line = "";
    string first = "";
    string last = "";
    int year;

    int location;

    iFile.open("test.csv");

    getline(iFile, line);
    while (getline(iFile, line))
    {

        location = line.find(',');
        first = line.substr(0, location);
        line = line.substr(location + 1, line.length());

        location = line.find(',');
        last = line.substr(0, location);
        line = line.substr(location + 1, line.length());

        year = stoi(line);

        cout << "First: " << first << endl;
        cout << "Last: " << last << endl;
        cout << "Year: " << year << endl
             << '\n';
    }

    return 0;
}