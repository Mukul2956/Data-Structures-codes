#include <bits/stdc++.h>
using namespace std;

vector<int> preOrder(TreeNode* root, vector<int> &traversal){
    if(root == NULL){
        traversal.push_back(INT_MIN);
        return traversal;
    }
    traversal.push_back(root->val);
    preOrder(root->left, traversal);
    preOrder(root->right, traversal);
    return traversal;
}

bool isSameTree(TreeNode* p, TreeNode* q) {
    vector<int> pTraverse, qTraverse;
    preOrder(p,pTraverse);
    preOrder(q,qTraverse);
    if(pTraverse == qTraverse){
        return true;
    }
    return false;
}

int main(){
    // Creating Tree 1
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);

    // Creating Tree 2 (same structure and values)
    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);

    // Creating Tree 3 (different structure or values)
    TreeNode* root3 = new TreeNode(1);
    root3->left = new TreeNode(2);
    root3->right = new TreeNode(4);

    cout << "Tree 1 and Tree 2 are same: " << (isSameTree(root1, root2) ? "Yes" : "No") << endl;
    cout << "Tree 1 and Tree 3 are same: " << (isSameTree(root1, root3) ? "Yes" : "No") << endl;
}