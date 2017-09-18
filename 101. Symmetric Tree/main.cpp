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
    TreeNode* ReverseTree(TreeNode* root) {
        if (root == NULL)
            return NULL;
        TreeNode* Temp = root->right;
        root->right = ReverseTree(root->left);
        root->left = ReverseTree(Temp);
        return root;
    }

    bool isSame(TreeNode* p, TreeNode* q){
        if(p==NULL&&q==NULL)
            return true;
        if(p!=NULL&&q==NULL || p==NULL&&q!=NULL)
            return false;
        if(isSame(p->left, q->left)&&isSame(p->right, q->right)&&p->val==q->val)
            return true;
        return false;
    }

    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return isSame(root->left, ReverseTree(root->right));

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}