#include <bits/stdc++.h>
using namespace std;

class TicTacToe
{
private:
    vector<vector<char>> board;
    bool gameOver;
    char winner;

    void assign(char a)
    {
        winner = a;
        gameOver = true;
    }

public:
    TicTacToe()
    {
        gameOver = false;
        vector<char> row(3, '*');
        for (int i{0}; i < 3; ++i)
            board.push_back(row);
    }

    void print()
    {
        int pos = 0;
        for (int i{0}; i < 3; i++)
        {
            for (int j{0}; j < 3; j++)
            {
                if (board[i][j] == '*')
                    cout << pos;
                else
                    cout << board[i][j];
                pos++;
                if (j == 0 || j == 1)
                    cout << " | ";
            }
            if (i == 0 || i == 1)
                cout << "\n--|---|--\n";
        }
        cout << endl;
    }

    bool isGameOver()
    {
        return gameOver;
    }

    char getWinner()
    {
        return winner;
    }

    void checkGame()
    {
        for (int i{0}; i < 3; i++)
        {
            if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != '*')
                assign(board[i][0]);

            if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != '*')
                assign(board[0][i]);
        }

        if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != '*')
            assign(board[0][0]);

        if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != '*')
            assign(board[0][2]);

        // If no one has won, check if all fields are filled.
        int count = 0;
        for (auto i : board)
            for (auto j : i)
                if (j == '*')
                    count++;

        if (count == 9)
            assign('D');

        return;
    }
    bool move(char x, int i)
    {
        int a = i / 3;
        int b = i % 3;
        if (i >= 0 && i < 9)
            if (board[a][b] == '*')
            {
                board[a][b] = x;
                checkGame();
                return true;
            }
        return false;
    }
};

int main()
{
    TicTacToe game1;
    char player = 'X';

    cout << "Welcome to Tic-tac-toe!" << endl;

    while (!game1.isGameOver())
    {
        cout << endl;
        game1.print();
        cout << "Player " << player << " make your move: " << endl;
        int i;
        cin >> i;

        if (game1.move(player, i))
            player = player == 'X' ? 'O' : 'X';
        else
            cout << "Not a valid move" << endl;
    }
    cout << "Game is Over " << endl;

    cout << "Player " << game1.getWinner() << " wins!" << endl;
}