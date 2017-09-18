#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero=0;
        for(int i=0; i!=nums.size();i++){
            if(nums[i]==0){
                zero++;
            }else{
                nums[i-zero]=nums[i];
            }
        }
        for (int i=0; i!=zero;i++){
            nums[nums.size()-i-1]=0;
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}