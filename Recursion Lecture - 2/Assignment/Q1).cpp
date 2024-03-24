// Problem :- Print all the elements of an array in reverse order.

#include<iostream>
using namespace std;
void printReverseArray(int arr[], int i) {
    if(i == 0) {
        cout<<arr[i];
        return;
    }
    cout<<arr[i]<<" ";
    printReverseArray(arr, i-1);
}
int main(){
    int arr[] = {1,2,3,4,3,9,66,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printReverseArray(arr,n-1);
}