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

// Implement BFS using queue
// This implemention is more efficient due to absence of recursion.
/*
    Algorithm :- First of all make a queue which containing nodes of queue. Then push root 
    node of tree then store it into temp node. After that print that temp and pop root from
    queue. Now check if temp ka left exist karta hai then push that in queue and also check
    for the right child. This algo make to print BFS (level wise printing in left to right).
    For right to left swap if statements. 
*/
void levelOrderQueue (node* root) {
    queue<node*> q;
    q.push(root);
    while(q.size() > 0) {
        node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }
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

    levelOrderQueue(a); // 10 20 30 40 50 60 70 
}