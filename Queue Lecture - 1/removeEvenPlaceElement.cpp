// Problem :- Remove all the elements presents at even positions in queue. Consider 0-based indexing. Consider indexing start from (0 to ...).

/*
    Solution :-
    1. At even indices, pop the element from queue.
    2. At odd indices, pop out that element and push back to queue.
*/

#include<iostream>
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

void removeOddIndexElement(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){
        if(i%2 == 0) q.pop();
        else{
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
}
int main(){
    queue<int> q;
    q.push(30); // 0
    q.push(90); // 1
    q.push(10); // 2
    q.push(20); // 3
    q.push(60); // 4
    display(q);
    removeOddIndexElement(q);
    display(q);
}