#include <iostream>
using std::cin;
using std::cout;
using std::string;

void chooseWinner(char player, char computer);
char playerChoice();
char computerChoice();
void showChoice(char choice);

int main()
{

    char player;
    char computer;
    player = playerChoice();
    computer = computerChoice();

    cout << "Player Chose: ";
    showChoice(player);
    cout << "\nComputer Chose: ";
    showChoice(computer);
}

char playerChoice()
{
    char choice;

    cout << "*********************************\n";
    cout << "Rock Paper Scisscors Game\n";

    do
    {
        cout << "Choose your hand('r' for Rock, 'p' for Paper 's' for Scissors):";
        cin >> choice;

        choice = tolower(choice);

        if (choice != 'r' && choice != 'p' && choice != 's')
        {
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 'r' && choice != 'p' && choice != 's');

    return choice;
}
char computerChoice()
{
    char choice;

    srand(time(0));

    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }

    return choice;
}

void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n";
        break;
    case 'p':
        std::cout << "Paper\n";
        break;
    case 's':
        std::cout << "Scissors\n";
    }
}

void chooseWinner(char player, char computer)
{
}