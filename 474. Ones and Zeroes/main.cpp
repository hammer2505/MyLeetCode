#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> memo(m+1, vector<int>(n+1, 0));
        for(int i=0;i<strs.size();i++){
            int one=0,zero=0;
            for(int j=0;j<strs[i].size();j++)
                if(strs[i][j]=='0')
                    zero++;
                else
                    one++;
            for(int i=m;i>=zero;i--)
                for(int j=n;j>=one;j--)
                    memo[i][j] = max(memo[i][j], memo[i-zero][j-one]+1);
        }
        return memo[m][n];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}