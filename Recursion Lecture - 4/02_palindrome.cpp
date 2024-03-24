// Problem :- Find out whether a given string is palindrome or not using recursion.

#include<iostream>
using namespace std;
bool isPalindrome(string s,int i,int j){
    if(i>j) return true;
    if(s[i] == s[j]){
        return isPalindrome(s,i+1,j-1);
    } 
    else {
        return false;
    }
}
int main(){
    string s = "weffdffea";
    int n = s.length();
    cout<<isPalindrome(s,0,n-1);
}