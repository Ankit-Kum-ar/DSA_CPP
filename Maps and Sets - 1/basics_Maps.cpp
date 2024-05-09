#include<iostream>
#include<unordered_map>
using namespace std;
int main() {

    // Defining the unordered map.
    unordered_map<string, int> mp;

    // For adding key-values to map, we take help of pair STL.
    pair<string, int> p1;
    p1.first = "Ankit";
    p1.second = 99;
    pair<string, int> p2;
    p2.first = "Shiv";
    p2.second = 94;
    pair<string, int> p3;
    p3.first = "Moksh";
    p3.second = 92;

    // Other method to insert key-values in map that is easy also..
    mp["Raj"] = 56;
    mp["Rajesh"] = 86;

    // Inserting these pairs into map.
    mp.insert(p1);
    mp.insert(p2);
    mp.insert(p3);

    // Printing the maps.
    for(auto x : mp) cout<<x.first<<" "<<x.second<<endl;

    // Erasing some element from maps.
    mp.erase("Raj");

    // For size of map.
    cout<<mp.size()<<endl;

    // Also print the values as ..
    cout<<mp["Rajesh"]; // 86
}