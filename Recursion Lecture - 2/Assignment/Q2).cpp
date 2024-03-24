// Problem :- Print index of a given element in an array. If not present, print -1.

#include<iostream>
using namespace std;
void printIndex(int arr[], int i, int x){
    if(i == 0){
        cout<<"-1";
        return;
    }
    if(arr[i] == x){
        cout<<i;
        return;
    }
    printIndex(arr,i-1,x);
}
int main() {
    int arr[] = {3,4,7,2,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printIndex(arr,n,10);
}