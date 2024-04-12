// Problem :- Find the product of all values in Binary Tree.

#include<iostream>
using namespace std;
class node {
public:
    int val;
    node* left;
    node* right;
    node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

long long multiply (node* root) { // Mutliply function
    if(root == NULL) return 1;
    return (root->val) * multiply(root->left)* multiply(root->right);
}

// Function to find minimum value.
int minimum(node* root) {
    if(root == NULL) return INT_MAX;
    return (min(root->val, min(minimum(root->left), minimum(root->right))));
}

int main(){

    node* a = new node(10); // Root node
    node* b = new node(20);
    node* c = new node(90);
    node* d = new node(40);
    node* e = new node(50);
    node* g = new node(70);

    // Make connection among all nodes.
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = g;

    
    cout<<multiply(a)<<endl;
    cout<<minimum(a);

}