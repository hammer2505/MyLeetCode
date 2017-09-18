#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> res;
    void _combinationSum3(int k, int n, int start, vector<int> result){
        if(k==0)
            return;
        for(int i=start;i<=9;i++){
            if(n>i){
                result.push_back(i);
                _combinationSum3(k-1, n-i, i+1, result);
                result.pop_back();
            }
            else if(n==i && k==1){
                result.push_back(i);
                res.push_back(result);
                result.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        res.clear();
        vector<int> result;
        _combinationSum3(k, n, 1, result);
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}