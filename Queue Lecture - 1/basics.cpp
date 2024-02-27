#include<iostream>
#include<queue>
using namespace std;

// display function to show the elements of stack.
void display(queue<int>& q){
    int n = q.size(); // In-built function of queue.
    for(int i=0;i<n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // cout<< q.front();
    display(q);
    q.pop();
    display(q);
}