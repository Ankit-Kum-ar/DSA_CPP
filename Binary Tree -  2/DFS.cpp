#include<iostream>
#include<algorithm>
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

// Implementing DFS using simple preorder algorithm.
void levelOrder(node* root) {
    if(root == NULL) return;
    cout<<root->val<<" ";
    levelOrder(root->left);
    levelOrder(root->right);
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

    levelOrder(a); // 10 20 40 50 30 60 70 
}