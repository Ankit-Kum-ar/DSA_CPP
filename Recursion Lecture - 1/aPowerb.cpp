// Problem :- Make a function which calculates ‘a’ raised to the power ‘b’ using recursion.

#include<iostream>
using namespace std;
int aPowerb(int a, int b){
    if(b == 1) return a;
    return a * aPowerb(a, b-1);
}
int main(){
    cout<<aPowerb(2, 6);
}