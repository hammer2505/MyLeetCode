#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
private:
    vector<vector<string>> res;
    vector<bool> col, dia1, dia2;
    void putQueen(int n, int index, vector<int> &row){
        if(index == n){
            res.push_back( genrateBoard(n,row));
            return;
        }
        for(int i=0; i<n;i++){
            if(!col[i] && !dia1[index+i] && !dia2[index-i+n-1]){
                row.push_back(i);
                col[i]=true;
                dia1[index+i]=true;
                dia2[index-i+n-1]=true;
                putQueen(n,index+1, row);
                col[i]=false;
                dia1[index+i]=false;
                dia2[index-i+n-1]=false;
                row.pop_back();
            }
        }
        return;
    }

    vector<string> genrateBoard(int n, vector<int> &row){
        vector<string> board(n, string(n, '.'));
        for( int i = 0 ; i < n ; i ++ )
            board[i][row[i]] = 'Q';
        return board;
    }
public:
    int totalNQueens(int n) {
        res.clear();
        col = vector<bool>(n, false);
        dia1 = vector<bool>(2*n-1, false);
        dia2 = vector<bool>(2*n-1, false);
        vector<int> row;
        putQueen(n,0,row);
        return res.size();

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}