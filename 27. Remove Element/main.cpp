#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int zeros=0;
        for(int i=0; i!=nums.size();i++){
            if(nums[i]==val){
                zeros++;
            }
            else{
                nums[i-zeros]=nums[i];
            }
        }
        return nums.size()-zeros;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}