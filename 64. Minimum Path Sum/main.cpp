#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> res;

class Solution {
private:
    int m, n;
    vector<vector<int>> res;
    void find(vector<vector<int>>& grid, int y, int x){
        for(int i=m-2;i>=0;i--)
            for(int j=n-2;j>=0;j--) {
                if (res[i + 1][j] == -1)
                    find(grid, i+1,j);
                if (res[i][j+1] == -1)
                    find(grid, i,j+1);
                res[i][j] = grid[i][j] + min(res[i + 1][j], res[i][j + 1]);
            }

    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size()==0)
            return 0;
        else if(grid.size()==1){
            int sum=0;
            for(int i=0;i<grid[0].size();i++)
                sum+=grid[0][i];
            return sum;
        }else{
            m = grid.size();
            n = grid[0].size();
            res = vector<vector<int>>(m, vector<int>(n, -1));
            res[m-1][n-1] = grid[m-1][n-1];
            for(int i=n-2;i>=0;i--)
                res[m-1][i] = res[m-1][i+1]+grid[m-1][i];
            for(int i=m-2;i>=0;i--)
                res[i][n-1] = res[i+1][n-1]+grid[i][n-1];
            }

            find(grid, 0, 0);

            //for(int i=0;i<2;i++){
             //   for(int j=0;j<2;j++)
             //       cout << res[i][j]<< " ";
             //   cout << endl;
            //}

            return res[0][0];
    }
};

int main() {
    vector<vector<int>> data = {{1,2},{1,1}};
    Solution().minPathSum(data);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            cout << data[i][j]<< " ";
        cout << endl;
    }
    return 0;
}