#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> ans;

    bool valid(vector<string> &board, int n, int row, int col)
    {
        for (int i{0}; i < n; i++)
        {
            if (board[i][col] == 'Q')
                return false;
            if (board[row][i] == 'Q')
                return false;
        }

        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
            if (board[i][j] == 'Q')
                return false;

        for (int i = row, j = col; i < n && j >= 0; i++, j--)
            if (board[i][j] == 'Q')
                return false;

        return true;
    }

    void help(vector<string> &board, int n, int col)
    {
        if (col == n)
        {
            ans.push_back(board);
            return;
        }
        for (int i{0}; i < n; i++)
        {
            if (valid(board, n, i, col))
            {

                board[i][col] = 'Q';
                help(board, n, col + 1);
                board[i][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {

        string s(n, '.');

        vector<string> board(n);

        for (int i{0}; i < n; i++)
            board[i] = s;

        help(board, n, 0);

        return ans;
    }
};