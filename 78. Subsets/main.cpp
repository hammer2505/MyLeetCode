#include <iostream>
#include <vector>

using namespace std;

class Solution {

public:
    vector<vector<int>> res = {};
    void _subsets(vector<int>& nums, int index, vector<int> result){
        for(int i=index;i<nums.size();i++){
            result.push_back(nums[i]);
            res.push_back(result);
            _subsets(nums, i+1, result);
            result.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        res.clear();
        res.push_back({});
        vector<int> result;
        _subsets(nums, 0, result);
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}