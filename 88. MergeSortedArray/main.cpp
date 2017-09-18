#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m,j=n;
        while(i>0||j>0){
            if(i==0){
                nums1[j+i-1]=nums2[--j];
            }else if(j==0){
                nums1[j+i-1]=nums1[--i];
            }else if(nums1[i-1]<nums2[j-1]){
                nums1[j+i-1]=nums2[--j];
            }else{
                nums1[j+i-1]=nums1[--i];
            }
        }
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}