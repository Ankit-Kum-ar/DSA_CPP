// Problem :- Print elements of nth level.(bfs)

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

// void display(node* root, int level, int count){ // This is not optimized way to print level order.
//     // Display always happen with the help of recursion.
//     if(root == NULL) return;
//     if(count == level) { // Print the elements of desired level.
//         cout<<root->val<<" ";
//         count = 0;
//     }
//     count++;
//     display(root->left, level, count);
//     display(root->right, level, count);
// }

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

    // Now I want to print all levels of nodes in left to right manner.
    // Firstly we have to find the number of levels.
    int n = level(a);
    for(int i=1;i<=n;i++) { // 10 20 30 40 50 60 70 
        display(a, i, 1); 
    }
    
    cout<<endl;
    levelOrderQueue(a); // 10 20 30 40 50 60 70 
}