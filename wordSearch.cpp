#include <bits/stdc++.h>
using namespace std;
bool dfs(vector<vector<char>>& board, string word, int index,int row,int col){
    if(index==word.size()) return true;
    if(row>=board.size() || row<0 || col<0 || col>=board[0].size()) return false;
    if(board[row][col]!=word[index]) return false;
    bool found = dfs(board,word,index+1,row+1,col)||
    dfs(board,word,index+1,row-1,col)||
    dfs(board,word,index+1,row,col+1)||
    dfs(board,word,index+1,row,col-1);
    return found;
}
bool exist(vector<vector<char>> board, string word){
    for (int row = 0; row < board.size(); row++)
    {
        for (int col = 0; col < board[0].size(); col++)
        {
            if(board[row][col]==word[0] && dfs(board,word,0,row,col)) return true;
        }
        
    }
    return false;
    
}
int main()
{
    //Test Case 1
    vector<vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word = "ABCCED";
    cout<<exist(board,word)<<endl;
    //Test Case 2
    vector<vector<char>> board1 = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word1 = "SEE";
    cout<<exist(board1,word1)<<endl;
return 0;
}