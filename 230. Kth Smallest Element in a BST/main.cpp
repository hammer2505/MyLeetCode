#include <iostream>

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {

        int middle = sumNode(root->left);
        if(middle==k-1)
            return root->val;
        else if(middle>k-1)
            return kthSmallest(root->left, k);
        else
            return kthSmallest(root->right, k-middle-1);
    }
    int sumNode(TreeNode* node){
        if(node==NULL)
            return 0;
        int res=1;
        res+=sumNode(node->left)+sumNode(node->right);
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}