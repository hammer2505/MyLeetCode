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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(find(root->left,p) && find(root->left,q))
            return lowestCommonAncestor(root->left, p, q);
        if(find(root->right,p) && find(root->right,q))
            return lowestCommonAncestor(root->right, p, q);
        return root;
    }

    bool find(TreeNode* root, TreeNode* p){
        if(root==p)
            return true;
        if(root==NULL)
            return false;
        return find(root->left,p)||find(root->right,p);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}