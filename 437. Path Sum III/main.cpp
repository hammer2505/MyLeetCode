#include <iostream>

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int pathSum(TreeNode* root, int sum) {
        if(root==NULL)
            return 0;

        int res=findPath(root, sum);
        res+=pathSum(root->left, sum);
        res+=pathSum(root->right, sum);
        return res;
    }

private:
    int findPath(TreeNode* node, int sum){
        if(node==NULL)
            return 0;
        int res=0;
        if(node->val == sum){
            res+=1;
        }
        res+=findPath(node->left, sum-node->val);
        res+=findPath(node->right, sum-node->val);
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}