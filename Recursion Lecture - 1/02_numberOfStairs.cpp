// Problem :- Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3 steps at each level.

#include<iostream>
using namespace std;
int nStairs(int n){
    if(n < 0) return 0; // Base Case - 1
    if(n == 0) return 1; // Base Case - 2
    return (nStairs(n-1) + nStairs(n-2) + nStairs(n-3)); // Recursive Relation.
}   
int main(){
    cout<<nStairs(2);
}   