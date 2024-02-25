// Next Greater Element Problem
/* Problem Statement :- An array has given which would be like :- [3,1,2,5,4,6,2,3].
   Now we have to find the next greater element for each of element of the array.
   i.e. array would become = [5,2,5,6,6,-1,3,-1].
   For those elements which donot have next greater element they will assign as '-1'. 
*/

/*
    Algorithm :-
    1. Consider a stack to reduce the time complexeity = O(n^2) to O(n). Also take an extra array of ans. Therefore Space complexeity = O(n).
    2. The last element of array assign with '-1'. Due to not availablity of next greater element. Also, push the (n-1)th elment in stack.
    3. Now start a loop from 'n-2' to '0' indices.
    4. For ith element if current top element of stack is smaller or equal then simply pop that element from stack.
    5. If current top element of stack is greater than current ith element of array then assign that stack value to array ith place.
    6. If there is no availablibility of greater element in stack then assign '-1' to ith index of array.
    7. At lastly, push the current ith element to the stack.

    ===> pop ===> ans ===> push
*/


#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    stack<int> stk;
    int ans[n];
    stk.push(arr[n-1]);
    ans[n-1] = -1;
    for(int i=n-2;i>=0;i--){
        // pop
        while(stk.size()>0 and stk.top()<=arr[i]){ // Here we also check that stack should not be empty.
            stk.pop();
        }
        // ans
        if(stk.size()>0){
            ans[i] = stk.top();
        }
        else{
             ans[i] = -1;
        }
        // push
        stk.push(arr[i]);    
    }
    cout<<"The next greater element array: ";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}