#include<iostream>
using namespace std;
string removeCharcter(string s, string ans, int i){
    if(s[i] == '\0') return (ans + "");
    if(s[i] != 'a') return removeCharcter(s, ans + s[i], i+1);
    return removeCharcter(s, ans, i+1);
}
int main(){
    string s = "ankita";
    cout<<removeCharcter(s,"",0);
}