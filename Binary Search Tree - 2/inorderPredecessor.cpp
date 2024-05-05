#include<iostream>
using namespace std;

// TreeNode class ...
class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode (int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Inorder Traversal ...
void inorderTraversal (TreeNode* root) {
    if(root == NULL) return;
    inorderTraversal(root->left);
    cout<<root->val<<" ";
    inorderTraversal(root->right);
}

// Algorithm of inorder Predecessor ....
/*
    1. Go left once.
    2. Keep going right before encounter the NULL.
    3. Return predecessor.
*/

TreeNode* inorderPredecessor(TreeNode* node) {
    if(node->left == NULL) return NULL;
    TreeNode* pred = node->left;
    while(pred->right != NULL) {
        pred = pred->right;
    }
    return pred;
}

// Main function ...
int main() {
    // Making a Binary Search Tree...   
    TreeNode* root = new TreeNode(10);
    TreeNode* b = new TreeNode(5);
    TreeNode* c = new TreeNode(20);
    TreeNode* d = new TreeNode(2);
    TreeNode* e = new TreeNode(8);
    TreeNode* f = new TreeNode(15);
    TreeNode* g = new TreeNode(25);
    root->left = b;
    root->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    // Calling inorder Traversal ...
    inorderTraversal(root); // 2 5 8 10 15 20 25 
    cout<<endl;

    // Now we have to find the inorder Predecessor for that we apply an algorithm.
    TreeNode* ans = inorderPredecessor(c);
    cout<<ans->val;
}