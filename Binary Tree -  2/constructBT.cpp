// Here we create a BT by giving array. 

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

node* construct (int arr[], int n) {
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

// Algorithm of BFS ...
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
    int arr[] = {1,2,3,4,5,6,INT_MIN,6,INT_MIN,INT_MIN,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    node* root = construct(arr, n);

    levelOrderQueue(root); // 10 20 30 40 50 60 70 
}