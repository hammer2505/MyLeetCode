#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> res;
    void _combinationSum(vector<int>& candidates, int start, int target, vector<int> result){
        if(target<= 0 )
            return;

        for(int i=start;i<candidates.size();i++) {
            if (i > start && candidates[i] == candidates[i - 1]) continue;
            if (target == candidates[i])  {
                result.push_back(candidates[i]);
                res.push_back(result);
                result.pop_back();
            } else {
                result.push_back(candidates[i]);
                _combinationSum(candidates, i + 1, target - candidates[i], result);
                result.pop_back();
            }
        }
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        res.clear();
        vector<int> result;
        _combinationSum(candidates, 0, target, result);
        return res;
    }
};

int main() {
    vector<int> nums = {10,1,2,7,6,1,5};
    vector<vector<int>> res = Solution().combinationSum2(nums, 8);
    cout << "______________________"<<endl;
    for(int i=0;i<res.size();i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}