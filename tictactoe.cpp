#include <iostream>
#include <cstdlib>

using namespace std;

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}};

char currentPlayer = 'X';

void displayBoard()
{
    system("cls");

    cout << "\n\n";
    cout << "\t TIC TAC TOE GAME\n\n";

    cout << "\t " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "\t-----------\n";

    cout << "\t " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "\t-----------\n";

    cout << "\t " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
    cout << endl;
}

void playerTurn()
{
    int choice;

    cout << "Player " << currentPlayer << ", Enter Position (1-9): ";
    cin >> choice;

    if (choice == 1 && board[0][0] == '1')
        board[0][0] = currentPlayer;

    else if (choice == 2 && board[0][1] == '2')
        board[0][1] = currentPlayer;

    else if (choice == 3 && board[0][2] == '3')
        board[0][2] = currentPlayer;

    else if (choice == 4 && board[1][0] == '4')
        board[1][0] = currentPlayer;

    else if (choice == 5 && board[1][1] == '5')
        board[1][1] = currentPlayer;

    else if (choice == 6 && board[1][2] == '6')
        board[1][2] = currentPlayer;

    else if (choice == 7 && board[2][0] == '7')
        board[2][0] = currentPlayer;

    else if (choice == 8 && board[2][1] == '8')
        board[2][1] = currentPlayer;

    else if (choice == 9 && board[2][2] == '9')
        board[2][2] = currentPlayer;

    else
    {
        cout << "\nInvalid Move! Try Again.\n";
        system("pause");
        playerTurn();
    }

    if (currentPlayer == 'X')
        currentPlayer = 'O';
    else
        currentPlayer = 'X';
}

bool checkWin()
{

    for (int i = 0; i < 3; i++)
    {

        if (board[i][0] == board[i][1] &&
            board[i][1] == board[i][2])
            return true;

        if (board[0][i] == board[1][i] &&
            board[1][i] == board[2][i])
            return true;
    }

    if (board[0][0] == board[1][1] &&
        board[1][1] == board[2][2])
        return true;

    if (board[0][2] == board[1][1] &&
        board[1][1] == board[2][0])
        return true;

    return false;
}

bool checkDraw()
{

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            if (board[i][j] != 'X' &&
                board[i][j] != 'O')
                return false;
        }
    }

    return true;
}

void resetBoard()
{

    char value = '1';

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            board[i][j] = value++;
        }
    }

    currentPlayer = 'X';
}

int main()
{

    char replay;

    do
    {

        resetBoard();

        while (true)
        {

            displayBoard();

            playerTurn();

            displayBoard();

            if (checkWin())
            {

                if (currentPlayer == 'X')
                    cout << "Player O Wins!\n";
                else
                    cout << "Player X Wins!\n";

                break;
            }

            if (checkDraw())
            {
                cout << "Game Draw!\n";
                break;
            }
        }

        cout << "\nPlay Again? (Y/N): ";
        cin >> replay;

    } while (replay == 'Y' || replay == 'y');

    cout << "\nThanks For Playing Tic Tac Toe!\n";

    return 0;
}