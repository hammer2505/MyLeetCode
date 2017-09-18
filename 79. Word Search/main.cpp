#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<bool>> used;
    bool Find(vector<vector<char>>& board, string word, int x, int y, int index){
        if(index>=word.size())
            return true;
        cout << word << " " << x << " " << y <<" " << index<< endl;
        for (int i=0;i<board.size();i++)
            for (int j=0;j<board[0].size();j++)
                cout << used[i][j] << endl;

        bool res = false;
        if(board.size()>y+1 && board[y+1][x]==word[index] && !used[y+1][x]){
            if(index==word.size()-1)
                return true;
            used[y+1][x] = true;
            res = res||Find(board, word, x, y+1, index+1);
            used[y+1][x] = false;
        }
        if(y-1>=0 && board[y-1][x]==word[index] && !used[y-1][x]){
            if(index==word.size()-1)
                return true;
            used[y-1][x] = true;
            res = res||Find(board, word, x, y-1, index+1);
            used[y-1][x] = false;
        }
        if(board[0].size()>x+1 && board[y][x+1]==word[index] && !used[y][x+1]){
            if(index==word.size()-1)
                return true;
            used[y][x+1] = true;
            res = res||Find(board, word, x+1, y, index+1);
            used[y][x+1] = false;
        }
        if(x-1>=0 && board[y][x-1]==word[index] && !used[y][x-1]){
            if(index==word.size()-1)
                return true;
            used[y][x-1] = true;
            res = res||Find(board, word, x-1, y, index+1);
            used[y][x-1] = false;
        }
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        bool res=false;

        vector<bool> used1 = vector<bool>(board[0].size(),false);
        used = vector<vector<bool>>(board.size(), used1);

        for (int i=0;i<board.size();i++)
            for (int j=0;j<board[0].size();j++)
                if(board[i][j]==word[0]) {
                    used[i][j]=true;
                    res = res || Find(board, word, j, i, 1);
                    used[i][j]=false;
                }
        return res;
    }
};

int main() {
    //vector<vector<char>> data = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    vector<vector<char>> data = {{'a','a'}};
    cout << Solution().exist(data, "aaa");
    return 0;
}