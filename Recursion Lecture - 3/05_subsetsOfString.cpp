// Problem :- Print all the subsets of string.

#include<iostream>
using namespace std;

// Here we take help of a property substr. substr(1) => return string from index '1'.
void subset(string s, string ans){
    if(s == "") {
        cout<<ans<<", ";
        return;
    }
    char ch = s[0];
    subset(s.substr(1), ans + ch);
    subset(s.substr(1), ans);
}
int main(){
    string s = "abc";
    subset(s,"");
}