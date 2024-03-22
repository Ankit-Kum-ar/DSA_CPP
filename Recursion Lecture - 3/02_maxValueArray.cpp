// Problem :- Find out maximum element of an array using recursion.

#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int maxValue(int arr[], int n, int x){
    // if(n < 0) return INT_MIN;
    if(n == 0) return max(x, INT_MIN); // At 0th index no one has to compare. Therefore we use INT_MIN.
    return maxValue(arr, n-1, max(x, arr[n-1])); // Here we compare x and arr[n-1] element.
}
int main(){
    int arr[] = {4, 6, 2, 10, 33};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxValue(arr, n, INT_MIN);
}