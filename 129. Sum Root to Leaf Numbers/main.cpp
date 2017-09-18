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
    vector<int> Path(TreeNode* root, vector<int> path){
        if(!root) return path;
        cout<<root->val<<endl;
        for(int i=0;i<path.size();i++)
            path[i]=path[i]*10 + root->val;
        if(root->left==NULL && root->right==NULL)
            return path;
        vector<int> leftSum;
        vector<int> rightSum;
        if(root->left!=NULL)
            leftSum = Path(root->left, path);
        if(root->right!=NULL)
            rightSum = Path(root->right, path);
        for(int i=0;i<rightSum.size();i++)
            leftSum.push_back(rightSum[i]);
        return leftSum;
    }
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        vector<int> path1 = {0};
        int res = 0;
        vector<int> leftSum = Path(root, path1);
        for(int i=0;i<leftSum.size();i++)
            res+=leftSum[i];
        return res;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}