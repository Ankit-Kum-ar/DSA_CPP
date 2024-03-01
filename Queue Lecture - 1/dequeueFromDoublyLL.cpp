// Making a dequeue from Doubly LinkedList.
/*
    Functions :-
    1. addFront()
    2. addRear()
    3. getFront()
    4. getRear()
    5. deleteFront()
    6. deleteRear()
    7. size()
*/
#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class dequeue{
    public:
    node* front;
    node* rear;
    int s;
    dequeue(){
        front = rear = NULL;
        s = 0;
    }
    void push_back(int data){
        node* temp = new node(data);
        if(s == 0){
            front = rear = temp;
            s++;
        }
        else{
            rear->next = temp;
            rear = temp;
            s++;
        }
    }
    void push_front(int data){
        node* temp = new node(data);
        if(s == 0){
            front = rear = temp;
            s++;
        }
        else{
            temp->next = front;
            front = temp;
            s++;
        }
    }
    void pop_back(){
        if(s == 0) return;
        else{
            node* temp = front;
            while(temp->next != rear){
                temp = temp->next;
            }
            rear = temp;
            rear->next = NULL;
            s--;
        }
    }
    void pop_front(){
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
        cout<<endl;
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
    int getFront(){
        return front->val;
    }
    int getRear(){
        return rear->val;
    }
};

int main(){
    dequeue dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.display();
    dq.push_front(5);
    dq.display();
    dq.pop_back();
    dq.display();
    cout<<dq.getFront()<<endl;
    cout<<dq.getRear()<<endl;
}