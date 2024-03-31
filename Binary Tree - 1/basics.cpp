// Here we create a binary tree. So binary tree have two children in their left and right.
// Each node in binary tree consist of some data.

#include<iostream>
#include<algorithm>
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

void display(node* root){
    // Display always happen with the help of recursion.
    if(root == NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}

int sum(node* root){
    // Get the sum of all nodes that present in the Binary tree.
    if(root == NULL) return 0;
    return (root->val + sum(root->left) + sum(root->right)); // The logic is similar to the fibonacci series.
}

int size(node* root){
    if(root == NULL) return 0;
    return (1 + size(root->left) + size(root->right));
}


int valueMax(node* root){
    if(root == NULL) return INT_MIN; // Here the minimum possible value that would be return is INT_MIN.
    int lMax = valueMax(root->left); // search max value from left subtree.
    int rMax = valueMax(root->right); // Search max value from right subtree.
    return max(root->val, max(lMax, rMax));
}

int level(node* root){ // Find the maximum level from left subtree and right subtree.
    if(root == NULL) return 0;
    return (1 + max(level(root->left) , level(root->right))); 
}

int main(){
    // Creation of root node and child nodes.
    node* a = new node(10); // Root node
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    node* e = new node(50);
    node* f = new node(60);
    node* g = new node(70);

    // Connection of different nodes among them.
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    display(a); // 10 20 40 50 30 60 70 

    cout<<endl<<sum(a);
    cout<<endl<<size(a);
    cout<<endl<<valueMax(a);
    cout<<endl<<level(a);
}