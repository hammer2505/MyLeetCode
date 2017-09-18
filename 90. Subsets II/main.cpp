#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {

public:
    vector<vector<int>> res = {};
    void _subsets(vector<int>& nums, int index, vector<int> result){
        for(int i=index;i<nums.size();i++){
            if(i!=0 && i>index && nums[i]==nums[i-1])
                continue;
            result.push_back(nums[i]);
            res.push_back(result);
            _subsets(nums, i+1, result);
            result.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        res.clear();
        res.push_back({});
        sort(nums.begin(), nums.end());
        vector<int> result;
        _subsets(nums, 0, result);
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}