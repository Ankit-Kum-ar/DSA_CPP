// Problem :- Remove the last k elements of a queue.

#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        int x = q.front();
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    stack<int> s;
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(30);
    q.push(40);
    display(q);

    int k = 3;
    int n = q.size();
    for(int i=0;i<n-k;i++){ // Push (n-k) elements from queue to stack.
        s.push(q.front());
        q.pop();
    }
    while(q.size()>0){ // Remove k elements from queue.
        q.pop();
    }
    while(s.size()>0){ // Now push back (n-k) elements to queue (but they will be in reverse order).
        q.push(s.top());
        s.pop();
    }
    
    // To reverse these elements in queue we have to take help of stack.
    for(int i=0;i<n-k;i++){
        s.push(q.front());
        q.pop();
    }
    while(s.size()>0){
        q.push(s.top());
        s.pop();
    }
    display(q);
}