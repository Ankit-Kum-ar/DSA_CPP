/*
    Ques : Given an array, arr[] containing 'n' integers, the task is to find an integer (say K) such that after replacing each and every index of the array by la; – KI where (i ∈ [1, n]), results in a sorted array. If no such integer exists that satisfies the above condition then return -1.
*/

/*
    Examples :-
    1. [5, 4, 3] => Unsorted array
        Now subtract 5 from array then it become [0, |-1|, |-2|] => [0, 1, 2].
        Sometimes it didn't work such as [5, 3, 4] => Subtract 5 then [0, 2, 1].
    
    2. [5, 3, 8] => Unsorted array
        Now subtract 5 then array become => [0, 2, 3]
*/

// Now we have to find the range of kmin to kmax.

#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
float max(float a, float b){
    if(a>=b) return a;
    else return b;
}
float min(float a, float b){
    if(a<b) return a;
    else return b;
}
int main(){
    int arr[] = {5, 3, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;

    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){  // kmin
            kmin = max(kmin,(arr[i]+arr[i+1])/2.0);
        }
        else{   //kmax
            kmax = min(kmax,(arr[i]+arr[i+1])/2.0);
        }
        if(kmin>kmax) {
            flag = false;
            break;
        }
    }
    if(flag == false) cout<<"-1";
    else if(kmin == kmax){
        if(kmin-(int)kmin == 0) cout<<"There is only one value of k: "<<kmin;
        else cout<<"-1";
    }
    else{
        if(kmin - (int)kmin > 0){
            kmin = (int)kmin + 1;   
        }
        cout<<"The range of k is: "<<kmin<<", "<<(int)kmax;
    }
}