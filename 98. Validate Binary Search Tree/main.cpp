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
    bool isValidBST(TreeNode* root) {
        if (root == NULL)
            return true;
        if( !isRight(root->right, root->val))
            return false;
        if( !isLeft(root->left, root->val))
            return false;
        return isValidBST(root->left)&&isValidBST(root->right);
    }

private:
    bool isRight(TreeNode* root, int num){
        if(root==NULL)
            return true;
        cout << "Right"<<" "<<root->val << " " << num << endl;
        if(root->val<=num)
            return false;
        return isRight(root->left,num) && isRight(root->right,num);
    }

    bool isLeft(TreeNode* root, int num){
        if(root==NULL)
            return true;
        cout << "Left"<<" "<<root->val << " " << num << endl;
        if(root->val>=num)
            return false;
        return isLeft(root->left,num) && isLeft(root->right,num);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}