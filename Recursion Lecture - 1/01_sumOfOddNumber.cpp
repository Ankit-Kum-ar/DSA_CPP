// Problem :- Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion.

#include<iostream>
using namespace std;
int sumOdd(int a, int b){
    if(a > b) return 0;
    if(a%2 != 0) return a + sumOdd(a+1, b);
    return 0 + sumOdd(a+1 , b);
}
int main(){
    cout<<sumOdd(1, 10);
}