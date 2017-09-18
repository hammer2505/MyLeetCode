#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> res;

    void _permute(vector<int> &nums, vector<int> result){
        if(nums.size()==1){
            result.push_back(nums[0]);
            res.push_back(result);
        }else{
            for(int i=0;i<nums.size();i++){
                for(int j=0;j<nums.size();j++)
                    cout << nums[j]<< " ";
                cout << "*";
                for(int j=0;j<result.size();j++)
                    cout << result[j]<< " ";
                cout << "*";
                cout << nums[i] << endl;
                result.push_back(nums[i]);
                vector<int> numsNew;
                for(int j=0;j<nums.size();j++){
                    if(j!=i)
                        numsNew.push_back(nums[j]);
                }
                _permute(numsNew, result);
                result.pop_back();
            }
        }
        return;
    }

    vector<vector<int>> permute(vector<int>& nums) {
        res.clear();
        vector<int> result;
        _permute(nums, result);
        return res;
    }
};

int main() {
    vector<int> nums = {1,2,3};
    vector<vector<int>> res = Solution().permute(nums);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++)
            cout << res[i][j]<< " ";
        cout << endl;
    }
    return 0;
}