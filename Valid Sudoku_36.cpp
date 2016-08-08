class Solution {
public:
bool isValidSudoku(vector<vector<char>>& board) {
    array<bitset<9>, 9> row, col;
    array<array<bitset<9>, 3>, 3> cell;
    for(int i = 0; i < board.size(); ++i)
    {
        for(int j =0; j < board[0].size(); ++j)
        {
            if (board[i][j]=='.'){
                continue;
            }
            int n = board[i][j] - '0' - 1;
            if((row[i].test(n) || col[j].test(n) || cell[i / 3][j / 3].test(n)))
            {
                return false;
            }
            row[i].set(n);
            col[j].set(n);
            cell[i / 3][j / 3].set(n);
        }
    }
    return true;
}
};


class Solution {
public:
bool isValidSudoku(vector<vector<char>>& board) {    
    for(int i = 0; i < board.size(); ++i)
    {
        for(int j = 0; j < board[0].size(); ++j)
        {
            for(int k = 0; k < board.size(); ++k)
            {
                if (board[i][j]=='.'){
                    continue;
                }
                if(i < k && board[k][j] == board[i][j])
                {
                    return false;
                }
                if(j < k && board[i][k] == board[i][j])
                {
                    return false;
                }
                if(board[i][j] == board[i - i % 3 + k / 3][j - j % 3 + k % 3])
                {
                    if(i != i - i % 3 + k / 3 || j != j - j % 3 + k % 3)
                        return false;
                }
            }
        }
    }
    return true;
}
};