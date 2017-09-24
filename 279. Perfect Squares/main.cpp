#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
private:
    vector<int>data;
    vector<int> memo;

public:
    int numSquares(int n) {
        for(int i=1;i<=sqrt(n);i++)
            data.push_back(i*i);
        memo = vector<int>(n+1, n);
        memo[0]=-1;
        memo[1]=1;
        for(int i=2;i<=n;i++){

            for(int j=0;j<data.size();j++){
                if(data[j]<i) {
                    memo[i] = min(memo[i], 1 + memo[i - data[j]]);
                }
                else if(data[j]==i)
                    memo[i]=1;
            }
        }
        return memo[n];

    }
};
int main() {
    cout << Solution().numSquares(4);

    return 0;
}