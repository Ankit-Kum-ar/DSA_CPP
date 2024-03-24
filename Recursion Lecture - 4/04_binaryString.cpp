// Problem :- Generate all binary strings of length n without consecutive 1’s.

#include<iostream>
using namespace std;
void printBinaryString(string s, int n){
    if(n == 0){
        cout<<s<<endl;
        return;
    }
    printBinaryString(s+'0',n-1);
    if(s[s.length()-1] != '1') printBinaryString(s+'1',n-1);
}
int main() {
    int n = 40;
    printBinaryString("", n);
}