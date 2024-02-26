/*
    Ques: Given an array with N distinct elements, convert the given array to a form where all elements are in the range from 0 to N-1. The order of elements is the same, i.e., O is placed in the place of the smallest element, 1 is placed for the second smallest element, ... N-1 is placed for the largest element.
*/

/*
    Eg :-
    [19, 12, 23, 8, 16] then the output should be like [3, 1, 4, 0, 2]
    According to the number value the count will be assigned.
    8 => 0, 12 => 1, 16 => 2, 19 => 3, 23 => 4. 
*/

/*
    Algorithm :-
    1. Consider an extra array to track the visited indices initiate with '0'.
    2. Take a count variable as start with '0' and increment as per requriement.
    3. For the visited element make that '1' in visited array.
    4. Time complexity = O(n^2) and Space complexity = O(n).
*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {19, 12, 23, 8, 16, 34, 65, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0; // For the indexing of smaller to larger as per 0 to max.
    vector<int> v(n,0); // '0' refers to not visited.
    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int idx = -1;
        for(int j=0;j<n;j++){ // Here we getting the smallest element.
            if(arr[j]<min and v[j]!=1){
                min = arr[j];
                idx = j;
            }
        }
        if(idx != -1){
            v[idx] = 1;
            arr[idx] = count;
            count++;
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}