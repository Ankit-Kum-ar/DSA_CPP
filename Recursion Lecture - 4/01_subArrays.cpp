// Problem :- Find out all the subarrays of an array.

#include<iostream>
#include<vector>
using namespace std;
void printSubArrays(int arr[],vector<int> v, int n, int i){
    if(i == n) {
        for(int j = 0;j<v.size();j++) {
            cout<<v[j]<<" ";
        }
        cout<<endl;
        return;
    }
    printSubArrays(arr,v,n,i+1);
    if(v.size() == 0){
        v.push_back(arr[i]);
        printSubArrays(arr,v,n,i+1);
    }
    else if(v.size()>0 and arr[i-1] == v[v.size()-1]){
        v.push_back(arr[i]);
        printSubArrays(arr,v,n,i+1);
    }
    
}
int main() {
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    printSubArrays(arr,v,n,0);
}

// For duplicate elements array, just apply loop methods to find the subsets of array.