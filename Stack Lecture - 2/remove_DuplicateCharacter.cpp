// Removing Consecutive Duplicates in a string
// string s = "aaabbcddaabffg" then output => "abcdafg".

#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    stack<char> stk;
    stk.push(str[0]);
    for(int i=1;i<str.length();i++){
       if(str[i] != stk.top()){
        stk.push(str[i]);
       }
    }
    string temp = "";
    while(stk.size()>0){
        temp += stk.top();
        stk.pop();
    }
    // cout<<reverse(temp.begin(),temp.end());
    reverse(temp.begin(),temp.end());
    cout<<"The reverse String: "<<temp;
    return 0;
}