// Sort the array of 0's and 1's 
// arr[] = {0, 1, 0, 0, 0, 1, 0, 1}

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {0, 1, 0, 1, 1, 1, 0, 1};
    int n = sizeof(arr)/sizeof(int);

    for(int k=0;k<n;k++) {
        cout<<arr[k]<<" ";
    }
    
    int i = 0;
    int j = n-1;

    while(i<j) {
        if(arr[i] == 0) i++;
        else {
            if(arr[j] == 0) {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
        if(arr[j] == 1) j--;
        else {
            if(arr[i] == 1) {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
    }

    cout<<endl;
    for(int k=0;k<n;k++) {
        cout<<arr[k]<<" ";
    }
}