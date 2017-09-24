#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid.size()==0)
            return 0;
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if(obstacleGrid[m-1][n-1]==1)
            return 0;
        vector<vector<int>> memo = vector<vector<int>>(m, vector<int>(n, 1));
        for(int i=n-2;i>=0;i--)
            if(obstacleGrid[m-1][i]==1)
                memo[m-1][i]=0;
            else{
                memo[m-1][i]=min(1, memo[m-1][i+1]);
            }

        for(int i=m-2;i>=0;i--)
            if(obstacleGrid[i][n-1]==1)
                memo[i][n-1]=0;
            else{
                memo[i][n-1]=min(1, memo[i+1][n-1]);
            }


        for(int i=m-2;i>=0;i--)
            for(int j=n-2;j>=0;j--)
                if(obstacleGrid[i][j]==1)
                    memo[i][j]=0;
                else
                    memo[i][j] = memo[i][j+1]+memo[i+1][j];
        return memo[0][0];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}