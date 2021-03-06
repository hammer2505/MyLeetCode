#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        vector<int> memo(nums.size(), 1);
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++)
                if(nums[j]<nums[i])
                    memo[i] = max(memo[i], 1+memo[j]);
        }

        int res=1;
        for(int i=0;i<nums.size();i++)
            res = max(res, memo[i]);
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}