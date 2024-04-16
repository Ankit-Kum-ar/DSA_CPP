// Display the whole boundary of tree which include left bottom and right boundaries.

#include<iostream>
#include<climits>
#include<queue>
using namespace std;
class node{ // Here creation of a node of a binary tree.
public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

node* construct (int arr[], int n) { // This code for construction of tree from array.
    queue<node*> q;
    node* root = new node(arr[0]);
    q.push(root);
    int i = 1, j = 2;
    while(q.size()>0 and i<n and j<n) {
        node* temp = q.front();
        q.pop();
        node* l;
        node* r;

        // Here check that give value in array is not null.
        if(arr[i] != INT_MIN) l = new node(arr[i]);
        else l = NULL;
        if(j != n and arr[j] != INT_MIN) r = new node(arr[j]);
        else r = NULL;

        temp->left = l;
        temp->right = r;

        if(l != NULL) q.push(l);
        if(r != NULL) q.push(r);

        i += 2;
        j += 2;
    }
    return root;
}

int level(node* root){ // Find the maximum level from left subtree and right subtree.
    if(root == NULL) return 0;
    return (1 + max(level(root->left) , level(root->right))); 
}

void display(node* root, int level, int count){ // This print left to right of level of nodes in tree.
    if(root == NULL) return;
    if(count == level) {
        cout<<root->val<<" ";
        return;
    }
    display(root->left, level, count+1);
    display(root->right, level, count+1);
}

// Left Boundary
void leftBoundary (node* root) {
    if(root == NULL) return;
    if(root->left == NULL and root->right == NULL) return; // Return when leaf node encounter.
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left == NULL) leftBoundary(root->right); // Me tabhi right jaunga jab left mein NULL ho.
}

// Bottom Boundary
void leafDisplay (node* root) {
    if(root == NULL) return;
    if(root->left == NULL and root->right == NULL) cout<<root->val<<" ";  
    leafDisplay(root->left);
    leafDisplay(root->right);
}

// Right Boundary
void rightBoundary (node* root) {
    if(root == NULL) return;
    if(root->left == NULL and root->right == NULL) return; // Rrturn when leaf node encountered.
    rightBoundary(root->right);
    if(root->right == NULL) rightBoundary(root->left); // Mein tabhi left jaunga jab right mein NULL ho.
    cout<<root->val<<" "; // Print at last to make reverse printing.
}

int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,INT_MIN,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,29,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    int n = sizeof(arr)/sizeof(arr[0]);
    node* root = construct(arr, n);

    // Print the tree as level wise using recursion.
    int m = level(root);
    for(int i=1;i<=m;i++) { // 10 20 30 40 50 60 70 
        display(root, i, 1);
        cout<<endl; 
    }

    // Boundary Traversal :- left boundary, all leaf nodes, right boundary.

    leftBoundary(root); // Left Boundary by the preoderTraversal code. 
    // cout<<endl;
    leafDisplay(root); // For Leafs we just simply apply any algo of pre,in,post Traversal.
    // cout<<endl;
    rightBoundary(root->right); // For right Boundary apply any traversal with right call first.


}