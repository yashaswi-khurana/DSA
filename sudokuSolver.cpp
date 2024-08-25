#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValid(vector<vector<char>> &board, int row, int col, char c)
    {
        for (int i = 0; i < 9; i++)
        {
            if (board[i][col] == c)
                return false;

            if (board[row][i] == c)
                return false;

            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
                return false;
        }
        return true;
    }

    bool solveSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == '.')
                {
                    for (char c = '1'; c <= '9'; c++)
                    {
                        if (isValid(board, i, j, c))
                        {
                            board[i][j] = c;
                            if (solveSudoku(board))
                                return true;
                            else
                                board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
};
int main()
{
    // Test Cases
    vector<vector<char>> board = {
        {'.', '.', '2', '9', '6', '.', '7', '.', '.'},
        {'.', '.', '4', '.', '.', '.', '9', '.', '.'},
        {'.', '.', '.', '8', '7', '.', '.', '5', '6'},
        {'.', '7', '.', '5', '8', '1', '.', '.', '9'},
        {'5', '9', '.', '6', '.', '.', '3', '.', '7'},
        {'2', '4', '1', '7', '.', '9', '5', '.', '.'},
        {'.', '.', '.', '.', '5', '.', '6', '.', '.'},
        {'.', '.', '6', '4', '2', '.', '8', '3', '.'},
        {'4', '8', '5', '.', '.', '.', '.', '.', '2'}};
    Solution s;
    s.solveSudoku(board);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}