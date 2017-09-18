#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=nums.size();
        if(len<=2)
            return len;
        int res=0;
        for(int i=2; i!=len; i++){
            //cout << nums[i-res-2] << " " << nums[i-res-1] << " " << nums[i] << endl;
            if(nums[i]==nums[i-res-1] && nums[i]==nums[i-res-2]){
                res++;
            }else{
                nums[i-res]=nums[i];
            }
        }
        return len-res;
    }
};

int main() {
    vector<int> res = {1,1,1,2,2,3};
    cout << Solution().removeDuplicates(res)<< endl;
    for(auto i : res)
        cout << i << endl;
    return 0;
}