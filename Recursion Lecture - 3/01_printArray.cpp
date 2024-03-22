// Print Array using Recursion 

#include<iostream>
using namespace std;
void printArray(int arr[], int n, int i){
    if(i == n) return;
    cout<<arr[i]<<" ";
    printArray(arr, n, i+1);
}
int main(){
    int arr[] = {1, 5, 3, 2, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n, 0);
}