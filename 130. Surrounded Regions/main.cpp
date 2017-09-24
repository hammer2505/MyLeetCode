#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


class Solution {
private:
    int d[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    int m,n;
    bool inArea(int x, int y){
        return x>=0 && x<n && y>=0 && y<m;
    }
    void dfs(vector<vector<char>>& board, int x, int y){
        board[y][x]='1';
        for(int i=0;i<4;i++){
            int xNew = x+d[i][0];
            int yNew = y+d[i][1];
            if(inArea(xNew, yNew) && board[yNew][xNew]=='O'){
                dfs(board, xNew, yNew);
            }
        }
        return;
    }

public:
    void solve(vector<vector<char>>& board) {
        m = board.size();
        if(m==0)
            return;
        n = board[0].size();

        int i=0;
        for(int j=0;j<n;j++)
            if(board[i][j]=='O')
                dfs(board, j, i);
        i=m-1;
        for(int j=0;j<n;j++)
            if(board[i][j]=='O')
                dfs(board, j, i);
        i=0;
        for(int j=0;j<m;j++)
            if(board[j][i]=='O')
                dfs(board, i, j);
        i=n-1;
        for(int j=0;j<m;j++)
            if(board[j][i]=='O')
                dfs(board, i, j);


        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(board[i][j]=='1')
                    board[i][j]='O';
                else
                    board[i][j]='X';
    }
};

int main() {
    vector<vector<char>> data = {{'X', 'X', 'X', 'X'},
                                 {'X', 'O', 'O', 'X'},
                                 {'X', 'X', 'O', 'X'},
                                 {'X', 'O', 'X', 'X'}};
    Solution().solve(data);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            cout << data[i][j] << " ";
        cout << endl;
    }
    return 0;
}