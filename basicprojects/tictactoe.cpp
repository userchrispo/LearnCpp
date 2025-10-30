#include <iostream>
using namespace std;
void playerMove(char playerC, char board[]);
void computerMove(char computerC, char board[]);
void getBoard(char board[]);
bool getWin(char board[], char playerC, char computerC);
bool getTie(char board[], char playerC, char computerC);

int main()
{
    /* Initalize variables, setup */

    char demoBoard[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char board[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char playerC;
    char computerC;
    char pMove;
    char cMove;
    int count = 0;
    srand(time(0));

    cout << "---------WELCOME TO TIC TAC TOE-----------\n"
         << '\n';

    do
    {
        cout << "\nDo you prefer X or O: ";
        cin >> playerC;
        playerC = toupper(playerC);
    } while ((playerC != 'X') && (playerC != 'O'));

    if (playerC == 'X')
    {
        computerC = 'O';
    }
    else
    {
        computerC = 'X';
    }

    cout << "OK Nice!!, you are player " << playerC << " Computer is " << computerC << '\n';

    /* Board and check results */
    getBoard(demoBoard);
    bool running = true;
    while (running)
    {
        playerMove(playerC, board);
        getBoard(board);

        if (getWin(board, playerC, computerC))
        {
            running = false;
            break;
        }
        else if (getTie(board, playerC, computerC))
        {
            running = false;
            break;
        }
        computerMove(computerC, board);
        getBoard(board);

        if (getWin(board, playerC, computerC))
        {
            running = false;
            break;
        }
        else if (getTie(board, playerC, computerC))
        {
            running = false;
            break;
        }
    }

    return 0;
}

void playerMove(char playerC, char board[])
{
    int move;

    do
    {
        cout << "\nWhere will you like to move?(1-9): ";
        cin >> move;
        move = move - 1;
        if (board[move] != 'X' && board[move] != 'O')
        {
            board[move] = playerC;
            return;
        }
        cout << "\nTRY AGAIN: PLACE ALREADY TOOK";
    } while (true);

    return;
}

void computerMove(char computerC, char board[])
{
    int move;
    do
    {
        move = rand() % 9;
        if (board[move] != 'X' && board[move] != 'O')
        {
            board[move] = computerC;
            return;
        }

    } while (true);

    return;
}
void getBoard(char board[])
{
    cout << "\n-------------------BOARD------------------\n";
    cout << "            |           " << "    |      " << '\n';
    cout << "     " << board[0] << "      |" << "       " << board[1] << "       |" << "       " << board[2] << '\n';
    cout << "            |           " << "    |      " << '\n';
    cout << "------------------------------------------" << '\n';
    cout << "            |           " << "    |      " << '\n';
    cout << "     " << board[3] << "      |" << "       " << board[4] << "       |" << "       " << board[5] << '\n';
    cout << "            |           " << "    |      " << '\n';
    cout << "------------------------------------------" << '\n';
    cout << "            |           " << "    |      " << '\n';
    cout << "     " << board[6] << "      |" << "       " << board[7] << "       |" << "       " << board[8] << '\n';
    cout << "            |           " << "    |      " << '\n';
}

bool getWin(char board[], char playerC, char computerC)
{
    bool winner = false;

    /* Check Rows if theres an winner */
    if ((board[0] != ' ') && board[0] == board[1] && (board[1] == board[2]))
    {
        winner = true;
    }
    else if ((board[3] != ' ') && board[3] == board[4] && (board[4] == board[5]))
    {
        winner = true;
    }
    else if ((board[6] != ' ') && board[6] == board[7] && (board[7] == board[8]))
    {
        winner = true;
    }

    /* Check Columns if theres an winnenr */
    else if ((board[0] != ' ') && board[0] == board[3] && (board[3] == board[6]))
    {
        winner = true;
    }
    else if ((board[1] != ' ') && board[1] == board[4] && (board[4] == board[7]))
    {
        winner = true;
    }
    else if ((board[2] != ' ') && board[2] == board[5] && (board[5] == board[8]))
    {
        winner = true;
    }

    /* Check Diagonal */
    else if ((board[0] != ' ') && board[0] == board[4] && (board[4] == board[8]))
    {
        winner = true;
    }
    else if ((board[2] != ' ') && board[2] == board[4] && (board[4] == board[6]))
    {
        winner = true;
    }

    if (winner)
    {

        if (board[0] == playerC)
        {
            cout << "you Won congrats!!!";
        }
        else
        {
            cout << "Computer WON!!!!!!";
        }

        return true;
    }

    return false;
}

bool getTie(char board[], char playerC, char computerC)
{

    for (int i = 0; i < 9; i++)
    {

        if (board[i] == ' ')
        {
            return false;
        }
    }

    cout << "TIE GAME: START OVER";

    return true;
}