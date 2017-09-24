#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<vector<int>> memo;

    bool tryPatition(const vector<int> &nums, int index, int sum){
        if(sum==0)
            return true;
        if(sum<0||index<0)
            return false;
        if(memo[index][sum] !=-1)
            return memo[index][sum];
        memo[index][sum] =  tryPatition(nums, index-1, sum) || tryPatition(nums, index-1, sum-nums[index]);
        return memo[index][sum];
    }
public:
    bool canPartition(vector<int>& nums) {
        int sumHalf=0;
        for(int i=0;i<nums.size();i++)
            sumHalf+=nums[i];
        if(sumHalf%2)
            return false;
        sumHalf = sumHalf/2;

        memo = vector<vector<int>>(nums.size(), vector<int>(sumHalf+1, -1));
        return tryPatition(nums, nums.size()-1, sumHalf);
    }
};

int main() {
    vector<int> data = {1,5,11,5};
    cout << Solution().canPartition(data);
    return 0;
}