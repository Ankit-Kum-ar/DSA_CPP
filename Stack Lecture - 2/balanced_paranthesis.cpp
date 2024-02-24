// Balanced Paranthesis :- 
//  ()()() => true
//  (())() => true
//  ()(()() => false 
//  )()( => false


// Steps :-
// If there is open bracket then push it in stack.
// If there is closed bracket then check that current top element of stack, if it is open bracket then pop out the open bracket from stack.
// At last if the stack is empty then paranthesis are balanced. 

#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    stack<char> stk;
    for(int i=0;i<str.length();i++){
        if(str[i] == '(') stk.push(str[i]);
        else{ // str[i] = ')'
            if(stk.size() == 0){
                cout<<"False";
                break;
            }
            else stk.pop();
        }
    }
    if(stk.size() == 0) cout<<"True";
    else cout<<"False";
    return 0;
}