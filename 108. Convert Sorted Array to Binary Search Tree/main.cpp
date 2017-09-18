#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0) return NULL;
        if(nums.size() == 1)
        {
            return new TreeNode(nums[0]);
        }
        vector<int> numsLeft,numsRight;
        int mid = nums.size()/2;
        TreeNode* root = new TreeNode(nums[mid]);
        for(int i=0;i<mid;i++)
            numsLeft.push_back(nums[i]);
        for(int i=mid+1;i<nums.size();i++)
            numsRight.push_back(nums[i]);
        root->left = sortedArrayToBST(numsLeft);
        root->right = sortedArrayToBST(numsRight);
        return root;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}