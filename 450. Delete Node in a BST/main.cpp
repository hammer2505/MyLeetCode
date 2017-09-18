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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
            return root;
        cout << root->val << endl;
        if(root->val!=key){
            if(root->val > key)
                root->left = deleteNode(root->left, key);
            else
                root->right = deleteNode(root->right, key);
            return root;
        }else{
            if(root->left==NULL)
                return root->right;
            else if(root->right==NULL)
                return root->left;
            TreeNode*  minNode = findMin(root->right);
            root->val = minNode->val;
            root->right = deleteNode(root->right, root->val);
        }
        return root;
    }
    TreeNode*  findMin(TreeNode* root){
        while(root->left!=NULL){
            root = root->left;
        }
        return root;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}