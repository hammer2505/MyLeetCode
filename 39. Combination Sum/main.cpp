#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> res;
    void _combinationSum(vector<int>& candidates, int start, int target, vector<int> result){
        if(target<= 0 )
            return;

        for(int i=start;i<candidates.size();i++) {
            if (target % candidates[i] == 0) {
                for (int k = 0; k < target / candidates[i] - 1; k++) {
                    result.push_back(candidates[i]);
                    _combinationSum(candidates, i + 1, target - (k + 1) * candidates[i], result);
                }
                result.push_back(candidates[i]);
                res.push_back(result);
                result.pop_back();
                for (int k = 0; k < target / candidates[i] - 1; k++)
                    result.pop_back();
            } else {
                for (int k = 0; k < target / candidates[i]; k++) {
                    result.push_back(candidates[i]);
                    //cout << "调用 " << i + 1 << " " << target - (k + 1) * candidates[i] << endl;
                    _combinationSum(candidates, i + 1, target - (k + 1) * candidates[i], result);
                }
                for (int k = 0; k < target / candidates[i]; k++)
                    result.pop_back();
            }
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        res.clear();
        vector<int> result;
        _combinationSum(candidates, 0, target, result);
        return res;
    }
};

int main() {
    vector<int> nums = {2,3,5};
    vector<vector<int>> res = Solution().combinationSum(nums, 8);
    cout << "______________________"<<endl;
    for(int i=0;i<res.size();i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}