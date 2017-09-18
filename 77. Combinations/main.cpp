#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> res;
    void _combine(int m, int n, int k, vector<int> nums){
        if(n-m<k)
            return;
        for(int i=m+1;i<=n;i++){
            nums.push_back(i);
            if(k==1)
                res.push_back(nums);
            else{
                _combine(i,n,k-1,nums);
            }
            nums.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        res.clear();
        vector<int> nums;
        _combine(0,n,k,nums);
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}