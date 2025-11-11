#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

struct Match
{
    string date;
    string home;
    string away;
    int home_goals;
    int away_goals;
    string competition;
    int match_id;

    Match(string date, string home, string away, int home_goals, int away_goals, string competition, int match_id)
    {
        this->date = date;
        this->home = home;
        this->away = away;
        this->home_goals = home_goals;
        this->away_goals = away_goals;
        this->competition = competition;
        this->match_id = match_id;
    }

    void display()
    {
        cout << endl;
        cout << "Date: " << date << endl;
        cout << "Home Team: " << home << endl;
        cout << "Away Team: " << away << endl;
        cout << "Home Goals: " << home_goals << endl;
        cout << "Away Goals: " << away_goals << endl;
        cout << "Competition: " << competition << endl;
        cout << "Match ID: " << match_id << endl;
        cout << endl;
    }
};

int main()
{

    ifstream iFile;
    string line = "";
    vector<Match> matches;

    iFile.open("matches.csv");
    if (!iFile.is_open())
    {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }
    getline(iFile, line);
    line = "";

    while (getline(iFile, line))
    {

        string date;
        string home;
        string away;
        int home_goals;
        int away_goals;
        string competition;
        int match_id;
        string tempString;

        stringstream ss(line);

        getline(ss, date, ',');
        getline(ss, home, ',');
        getline(ss, away, ',');
        getline(ss, tempString, ',');
        home_goals = stoi(tempString);
        getline(ss, tempString, ',');
        away_goals = stoi(tempString);
        getline(ss, competition, ',');
        getline(ss, tempString, ',');
        match_id = stoi(tempString);

        Match match(date, home, away, home_goals, away_goals, competition, match_id);
        matches.push_back(match);

        line = "";
    }

    for (auto match : matches)
    {
        match.display();
    }

    return 0;
}