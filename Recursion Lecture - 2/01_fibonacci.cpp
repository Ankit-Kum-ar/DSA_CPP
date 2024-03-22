// Problem :- Write a function to calculate the nth fibonacci number using recursion.

#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n == 1 || n == 2) return 1; // At n = 1 and n = 2 place '1' is present.
    return (fibonacci(n-1) + fibonacci(n-2)); // Each number in fibonacci series is sum of its previous two numbers.
}
int main(){
    cout<<fibonacci(7);
}