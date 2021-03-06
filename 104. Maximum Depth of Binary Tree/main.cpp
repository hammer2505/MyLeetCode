#include <iostream>

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int max(int a, int b){
        if(a>b) return a;
        else return b;
    }
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        return max(maxDepth(root ->left), maxDepth(root ->right))+1;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}