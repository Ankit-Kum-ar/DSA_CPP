// Sort the array of 0's, 1's and 2's.
// arr[] = {2, 0, 2, 1, 1, 0}

// Dutch-Flag Algorithm...
// 0 to lo-1 => 0
// lo to m-1 => 1
// hi to n-1 => 2

#include<iostream>
using namespace std;
int main() {
    int arr[] = {2, 0, 2, 0, 1, 0};
    int n = sizeof(arr)/sizeof(int);

    int lo = 0;
    int m = 0;
    int hi = n-1;

    while(m <= hi) {
        if(arr[m] == 2) {
            swap(arr[m], arr[hi]); 
            // No increment of m due to unkonwn value of arr[hi], it may be 2.
            hi--;
        }
        else if(arr[m] == 0) {
            swap(arr[m], arr[lo]);
            m++;
            lo++;
        }
        else m++;
    }

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}