// Implement inorder traversal using a stack.

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
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

int main () {
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = NULL;
    c->left = e;
    c->right = f;

    // Store the traversal in the vector.
    vector<int> ans;

    // Main Algroithm .... (Thoda different hai post and pre se)
    stack<TreeNode*> stk;
    TreeNode* node = a;
    while(stk.size() > 0 || node != NULL) {
        if(node != NULL) {
            stk.push(node);
            node = node->left;
        }
        else {
            TreeNode* temp = stk.top();
            stk.pop();
            ans.push_back(temp->val);
            node = temp->right;
        }
    }
    

    // Print the postorder
    for(auto x:ans) {
        cout<<x<<" ";
    }
}