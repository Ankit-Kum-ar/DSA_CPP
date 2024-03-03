// Reorder Queue (Interleave 1st Half with 2nd Half)
// [Do this problem using one stack only]

/*
    E.g. :- queue = [1 2 3 4 5 6 7 8] (should be in even length)
            After Interleave operation :- [1 5 2 6 3 7 4 8].
            The half of part from (5-8) should be in between the first half of queue (1-4).
*/  

/*
    Steps :-
    1. Phle second half ko aage laaye. [5 6 7 8 1 2 3 4]
    2. Phir (5 se 8) tak ko stack mein push kr diya toh queue = [1 2 3 4]
    3. Ab stack ke lements ko push kr de queue mein = [1 2 3 4 8 7 6 5]
    4. Then doobra second half ko aage laaye. [8 7 6 5 1 2 3 4]
    5. Now aadhe elements push kr do stack mein. [1 2 3 4]
    6. Ab ek ek element queue mein se pop kr ke push kro queue mein doobara but ab stack ka top bhi sath push krte rhe.
    7. [2 3 4 1 5] => 1 ko push kra queue mein or 5 jo top hai stack ka usse push kr diya.
    8. At finally, [1 5 2 6 3 7 4 8]
*/

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
    int n = 8;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    stack<int> stk;

    for(int i=0;i<n/2;i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }

    for(int i=0;i<n/2;i++){
        stk.push(q.front());
        q.pop();
    }

    while(stk.size()>0){
        q.push(stk.top());
        stk.pop();
    }

    for(int i=0;i<n/2;i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }

    for(int i=0;i<n/2;i++){
        stk.push(q.front());
        q.pop();
    }

    for(int i=0;i<n/2;i++){
        int x = q.front();
        q.pop();
        q.push(x);
        q.push(stk.top());
        stk.pop();
    }

    display(q);
}