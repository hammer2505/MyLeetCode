#include <iostream>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int maxHight(TreeNode* root){
        if(root==NULL)
            return 0;
        return max(maxHight(root->left), maxHight(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int h1 = maxHight(root->left);
        int h2 = maxHight(root->right);
        if(abs(h1-h2)<2)
            return isBalanced(root->left)&&isBalanced(root->right);
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}