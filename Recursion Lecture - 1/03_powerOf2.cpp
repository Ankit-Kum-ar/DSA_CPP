#include<iostream>
using namespace std;
bool powerOf2(int n){
    if(n == 1) return true; // Base Case => If we divide n by 2. If it is power of 2 then at last n become 1. 
    if(n%2 != 0) return false; // Base Case => If n is even but not power of 2 then there should some odd number present in its factor.
    return (false || powerOf2(n/2)); // Return for all conditions.
}
int main(){
    cout<<bool(powerOf2(128));
}