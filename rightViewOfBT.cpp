#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        recursionRight(root,0,res);
        return res;
    }
    void recursionRight(TreeNode* root, int level, vector<int> &res){
        if(root == NULL){
            return;
        }
        if(res.size() == level){
            res.push_back(root->val);
        }
        recursionRight(root->right,level+1,res);
        recursionRight(root->left,level+1,res);
    }
    TreeNode* buildTreeLevelOrder(){
        cout << "Enter root node's value (-1 for null): ";
        int val;
        cin >> val;
        if (val == -1) {
            return NULL;
        }
        
        TreeNode* root = new TreeNode(val);
        queue<Node*> q;
        q.push(root);
        
        while (!q.empty()) {
            Node* current = q.front();
            q.pop();
            
            cout << "Enter left child of " << current->data << " (-1 for null): ";
            int leftVal;
            cin >> leftVal;
            if (leftVal != -1) {
                current->left = new TreeNode(leftVal);
                q.push(current->left);
            }
            
            cout << "Enter right child of " << current->data << " (-1 for null): ";
            int rightVal;
            cin >> rightVal;
            if (rightVal != -1) {
                current->right = new TreeNode(rightVal);
                q.push(current->right);
            }
        }
        return root;
    }
    int main() {
        TreeNode* root = buildTreeLevelOrder();
        Solution sol;
        vector<int> result = sol.rightView(root);
        for (int val : result) {
            cout << val << " ";
        }
        cout << endl;
        return 0;
    }
};