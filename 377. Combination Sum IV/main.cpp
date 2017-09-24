#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<int> memo;
public:
    int combinationSum4(vector<int>& nums, int target) {
        memo = vector<int>(target+1,0);
        memo[0]=1;
        for(int i=1;i<=target;i++)
            for(int j=0;j<nums.size();j++){
                if(i>=nums[j])
                    memo[i] += memo[i-nums[j]];
            }
        return memo[target];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}