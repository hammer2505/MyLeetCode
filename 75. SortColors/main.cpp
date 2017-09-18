#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0, two=nums.size();
        for(int i=0;i<two;){
            if(nums[i]==0){
                swap(nums[zero++],nums[i++]);
            }else if(nums[i]==2){
                swap(nums[--two],nums[i]);
            }else
                i++;
        }
    }

    void sortColors1(vector<int>& nums) {
        int num0=0,num1=0,num2=0;
        for(int i=0;i!=nums.size();i++){
            if(nums[i]==0)
                num0++;
            else if(nums[i]==1)
                num1++;
            else
                num2++;
        }
        int i=0;
        for(;i!=num0;i++)
            nums[i]=0;
        for(;i!=num0+num1;i++)
            nums[i]=1;
        for(;i!=num0+num1+num2;i++)
            nums[i]=2;
    }
};


int main() {

    std::cout << "Hello, World!" << std::endl;
    return 0;
}