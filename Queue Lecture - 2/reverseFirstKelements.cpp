/*
    Problem :- Reverse First K elements of a Queue.
    e.g. - q = 10 20 30 40 50 and k = 3
           Then the final queue = 30 20 10 40 50
*/

/*
    Algorithm :-
    1. Consider a stack.
    2. Push first k elements in stack.
    3. Now push the stack elements back to the queue.
    4. Pop out (size(q) - k) elements from queue and again push these elements in queue.
*/

#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int> q){
    int n = q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    stack<int> s1; // For first k elements
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    int k = 3;
    for(int i=0;i<k;i++){
        s1.push(q.front());
        q.pop();
    }
    while(s1.size()>0){
        q.push(s1.top());
        s1.pop();
    }
    int n = q.size();
    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
    }
    display(q);

}