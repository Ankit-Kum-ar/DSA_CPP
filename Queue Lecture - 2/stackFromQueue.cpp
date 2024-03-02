// Implementation of Stack from Queue.
#include<iostream>
#include<queue>
using namespace std;
class stack{
    public:
    queue<int> q;
    int c;
    stack(){
        c = 0;
    }
    void push(int val){
        q.push(val);
        c++;
    }
    void pop(){
        int i = 0;
        while(i<c-1){
            int x = q.front();
            q.pop();
            q.push(x);
            i++;
        }
        q.pop();
        c--;
    }
    void display(){
        for(int i=0;i<c;i++){
            int x = q.front();
            cout<<x<<" ";
            q.pop();
            q.push(x);
        }
        cout<<endl;
    }
    int size(){
        return c;
    }
};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.display();
    s.pop();
    s.display();
    cout<<s.size();
}