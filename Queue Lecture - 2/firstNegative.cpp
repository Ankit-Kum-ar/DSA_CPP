/*
    Problem :- First negative in each window of size 'K'.
    e.g. :- [0, -1, -2, 3, 4, -5, 6, 4, 7, -8] and k = 3
    then output = [-1, -1, -2, -5, -5, -5, 0, -8]
    We have to push first negative window element in the ans vector.
*/

/*
    Algorithm :-
    1. Consider a queue.
    2. Push all the negative element's index in the queue.
    3. Check at ith index if current front() of queue is greater than or equal to i and front() should less than (i+k) value.
    4. If above condition true then push that element to the ans vector.
    5. Else pop() from queue.
*/

#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int arr[] = {0, -1, -2, 3, 4, -5, 6, 4, 7, -8};
    int n = sizeof(arr)/sizeof(arr[0]);
    queue<int> q;
    vector<int> ans;
    int k = 3;

    // Push all negative element's index in queue.
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            q.push(i);
        }
    }

    // Check elements for push in ans.
    for(int i=0;i<=n-k;i++){
       while(q.size()>0 and q.front()<i) q.pop();
       if(q.size() == 0 or q.front()>=i+k) ans.push_back(0);
       else ans.push_back(arr[q.front()]);
    }
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}