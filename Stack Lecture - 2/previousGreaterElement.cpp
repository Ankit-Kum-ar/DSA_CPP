// Previous Greater Element Problem
/* Problem Statement :- An array has given which would be like :- [3,1,2,5,4,6,2,3].
   Now we have to find the previous greater element for each of element of the array.
   i.e. array would become = [-1,3,3,-1,5,-1,6,6].
   For those elements which donot have previous greater element they will assign as '-1'. 
*/

/*
    Algorithm :-
    1. Consider a stack to reduce the time complexeity = O(n^2) to O(n). Also take an extra array of ans. Therefore Space complexeity = O(n).
    2. The first element of array assign with '-1'. Due to not availablity of previous greater element. Also, push the 0th elment in stack.
    3. Now start a loop from '1' to 'n-1' indices.
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
    int ans[n];
    stack<int> stk;
    ans[0] = -1;
    stk.push(arr[0]);
    for(int i=1;i<n;i++){
        while(stk.size()>0 and stk.top()<=arr[i]){ // pop
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