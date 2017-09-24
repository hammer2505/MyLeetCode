#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> data = vector<int>(amount+1, amount+1);
        data[0]=0;
        for(int i=0;i<amount+1;i++)
            if(i%coins[0]==0){
                data[i] = i/coins[0];
            }

        for (int i = 1; i < coins.size(); i++) {
            for(int j=0;j<=amount;j++) {
                if(j>=coins[i])
                    data[j] = min(data[j - coins[i]] + 1, data[j]);
            }
        }

        if(data[amount]==amount+1)
            return -1;
        else
            return data[amount];
    }
};

int main() {
    vector<int> coins = {1,2};
    cout<<Solution().coinChange(coins, 3);
    return 0;
}