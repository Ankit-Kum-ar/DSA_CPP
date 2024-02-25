// Stock Span Problem...
/*
    Problem Statement :-
    Input = {100, 80, 60, 70, 60, 75, 85}
    Output = {1, 1, 1, 2, 1, 4, 6}
    As per '70' it is high for 2 days such as at 2 and 3 indices.
*/

/*
    Algorithm :-
    1. Find the preivous greater element but we store index instead of element.
    2. Now we have pge array and original array. So we have to subtract pge array index from original array index.
*/

#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {100, 80, 60, 81, 70, 60, 75, 85};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pge[n]; // Previous Greater Element Array (indices)
    stack<int> stk;
    pge[0] = -1;
    stk.push(0);
    
    for(int i=1;i<n;i++){
        // Pop
        while(stk.size()>0 and arr[stk.top()]<=arr[i]){
            stk.pop();
        }

        // ans
        if(stk.size()>0){
            pge[i] = stk.top();
        }
        else{
            pge[i] = -1;
        }

        // Push
        stk.push(i);
    }
    cout<<"The Stock Span Array : ";
    for(int i=0;i<n;i++){
        cout<<i-pge[i]<<" ";
    }
}