// Problem :- Make a function which calculates the factorial of n using recursion.

#include<iostream>
using namespace std;
int factorial(int n){
    if(n == 0) return 1; // Base Case...
    return n*factorial(n-1); // Recursive Relation...
}
int main(){
    cout<<factorial(5);
}