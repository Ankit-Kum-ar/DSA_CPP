// Queue implementation through LinkedList ...
// push ==> insertAtTail, pop ==> deleteAtHead

#include<iostream>
using namespace std;
class node{ // User defined datatype.
    public:
    int val;
    node* next;
    node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class queue{ // User defined data structure.
    public:
    node* front;
    node* rear;
    int s;
    queue(){
        front = rear = NULL;
        s = 0;
    }

    // Push in queue always from end of LinkedList.
    void push(int data){
        node* temp = new node(data);
        if(front == NULL and rear == NULL){
            front = rear = temp;
            s++;
            return;
        }
        else{
            rear->next = temp;
            rear = temp;
            s++;
        }
    }

    // Pop in queue always from front of LinkedList.
    void pop(){
        if(s == 0) return;
        else{
            front = front->next;
            s--;
        }
    }
    void display(){
        node* temp = front;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }
    int size(){
        return s;
    }
    bool isempty(){
        if(s == 0) return true;
        return false;
    }
    int top(){
        return front->val;
    }
};


int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    cout<<"\n"<<q.size()<<endl;
    q.pop();
    q.display();
    cout<<"\n"<<q.size()<<endl;
    cout<<q.top();
}