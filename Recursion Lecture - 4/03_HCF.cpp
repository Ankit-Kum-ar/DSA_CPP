// Problem :- Calculate Greatest Common Divisor of two numbers.

#include<iostream>
using namespace std;
int HCF(int a, int b){
    if(b%a == 0) return a;
    else {
        return HCF(b%a, a);
    }
}
int main(){
    int a = 3, b = 8;
    cout<<HCF(min(a,b), max(a,b));
}