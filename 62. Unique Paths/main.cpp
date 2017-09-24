#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> memo = vector<vector<int>>(m, vector<int>(n, 1));
        for(int i=m-2;i>=0;i--)
            for(int j=n-2;j>=0;j--)
                memo[i][j] = memo[i][j+1]+memo[i+1][j];
        return memo[0][0];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}