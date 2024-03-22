// Problem :- Print all subsets but don't print repeated subsets.

// Hint :- Maintain a bool value which is true when added char otherwise false.

#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storeSubsetsII(string s,string original, vector<string>& ans, bool flag) {
    if(original == "") { // If original is empty then return it.
        ans.push_back(s);
        return;
    }

    // If ith and (i+1)th character are equal then add call only one.
    char ch = original[0]; // Take first character.
    if(original.length() == 1){
        if(flag == true) storeSubsetsII(s+ch,original.substr(1),ans,true);
        storeSubsetsII(s,original.substr(1),ans,true);
        return;
    }
    char dh = original[1]; // Take second character.
    if(dh == ch){ // Duplicate hai toh true and false.
        if(flag == true) storeSubsetsII(s+ch,original.substr(1),ans,true);
        storeSubsetsII(s,original.substr(1),ans,false);
    }
    else { // Duplicate ni hai toh true true.
        if(flag == true) storeSubsetsII(s+ch,original.substr(1),ans,true);
        storeSubsetsII(s,original.substr(1),ans,true);
    }

}
int main() {
    string str = "abaabbcc";
    vector<string> ans;
    storeSubsetsII("",str,ans,true);
    for(auto x:ans){
        cout<<x<<endl;
    }
}