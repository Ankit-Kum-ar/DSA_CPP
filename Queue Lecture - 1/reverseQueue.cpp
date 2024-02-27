// Problem :- Reverse the queue using a stack.

/*
    Solution :-
    Pop out elements from the queue(always from front) and push in the stack.
    Now push top elements in queue and pop them.
    Therefore the elements are reversed in the queue.
*/

#include<iostream>
#include<stack>
#include<queue>
using namespace std;

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

void reverse(queue<int>& q){
    int n = q.size();
    stack<int> stk;

    // Here We push elements of queue into stack.
    for(int i=0;i<n;i++){
        int x = q.front();
        stk.push(x);
        q.pop();
    }

    // Now we simply put back queue elements into the queue.
    while(stk.size()>0){
        q.push(stk.top());
        stk.pop();
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverse(q);
    display(q);
}