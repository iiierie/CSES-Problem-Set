#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
typedef map<int, int> mii;
bool SafetoPlace(int row, int col, vector<vector<char>> &board)
{
    // return true if we can safely place a queeen in that column
    int org_row = row;
    int org_col = col;

    if (board[row][col] == '*')
    {
        return false;
    }

    while (row >= 0 && col >= 0)
    { // diagonal
        if (board[row][col] == 'Q')
        {
            return false;
        }
        row--;
        col--;
    }


    row = org_row;
    col = org_col;
    // check in same column
    while (col >= 0)
    {
        if (board[row][col] == 'Q')
        {
            return false;
        }
        col--;
    }

    row = org_row;
    col = org_col;

    while (row < 8 && col>=0)
    {
        if (board[row][col] == 'Q')
        {
            return false;
        }
        row++;
        col--;
    }

   

    return true;
}

void placeQueen(int col, vector<vector<char>> &board, int &count)
{
    if (col == 8)
    {
        count++;
        return;
    }

    for (int r = 0; r < 8; r++)
    {
        if (SafetoPlace(r, col, board))
        {
            board[r][col] = 'Q';
            placeQueen(col + 1, board, count);
            board[r][col] = '.';
        }
    }
}

void solve(){
    vector<vector<char>> board(8, vector<char>(8));
    for(int i = 0; i < 8; i++){
        for(int j = 0;j<8;j++){
            cin>>board[i][j];
        }
    }
    
    int count = 0;
    placeQueen(0, board, count);
    cout << count << endl;   
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    solve();
    return 0;
}