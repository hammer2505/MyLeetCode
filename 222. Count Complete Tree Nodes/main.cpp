#include <iostream>
#include <math.h>
#include <queue>
#include <algorithm>
#include <sstream>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int deepLeft(TreeNode* root){
        if(root->left==NULL)
            return 0;
        int num=0;
        while(root->left!=NULL){
            num+=1;
            root = root->left;
        }
        return num;
    }

    int deepRight(TreeNode* root){
        if(root->left==NULL)
            return 0;
        int num=0;
        while(root->right!=NULL) {
            num+=1;
            root = root->right;
        }
        return num;
    }

    int countNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return 1;
        int deep1 = deepLeft(root);
        int deep2 = deepRight(root);
        cout << root->val <<" "<<deep1<< " " << deep2<<endl;
        if(deep1 == deep2)
            return pow(2,deep1+1)-1;
        else
            return countNodes(root->left)+countNodes(root->right)+1;
    }
};

void trimLeftTrailingSpaces(string &input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
        return !isspace(ch);
    }));
}

TreeNode* stringToTreeNode(string input) {
    input = input.substr(1, input.length() - 2);
    if (!input.size()) {
        return nullptr;
    }

    string item;
    stringstream ss;
    ss.str(input);

    getline(ss, item, ',');
    TreeNode* root = new TreeNode(stoi(item));
    queue<TreeNode*> nodeQueue;
    nodeQueue.push(root);

    while (true) {
        TreeNode* node = nodeQueue.front();
        nodeQueue.pop();

        if (!getline(ss, item, ',')) {
            break;
        }

        trimLeftTrailingSpaces(item);
        if (item != "null") {
            int leftNumber = stoi(item);
            node->left = new TreeNode(leftNumber);
            nodeQueue.push(node->left);
        }

        if (!getline(ss, item, ',')) {
            break;
        }

        trimLeftTrailingSpaces(item);
        if (item != "null") {
            int rightNumber = stoi(item);
            node->right = new TreeNode(rightNumber);
            nodeQueue.push(node->right);
        }
    }
    return root;
}

int main() {
    string line="[1,2,3]";
    TreeNode* root = stringToTreeNode(line);

    int ret = Solution().countNodes(root);

    string out = to_string(ret);
    cout << out << endl;

    return 0;
}