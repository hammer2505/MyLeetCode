#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> res;
    void _permute(vector<int> &nums, vector<int> result) {
        if (nums.size() == 1) {
            result.push_back(nums[0]);
            res.push_back(result);
        } else {
            set<int> s;
            for (int i = 0; i < nums.size(); i++) {
                if (s.find(nums[i]) == s.end()) {
                    result.push_back(nums[i]);
                    vector<int> numsNew;
                    s.insert(nums[i]);
                    for (int j = 0; j < nums.size(); j++) {
                        if (j != i)
                            numsNew.push_back(nums[j]);
                    }
                    _permute(numsNew, result);
                    result.pop_back();
                }
            }
        }
        return;
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        res.clear();
        vector<int> result;
        _permute(nums, result);
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(), res.end()), res.end());
        return res;
    }
};

int main() {
    vector<int> nums = {1,2,1};
    vector<vector<int>> res = Solution().permuteUnique(nums);
    for(int i=0;i<res.size();i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}