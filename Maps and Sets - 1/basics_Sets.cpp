#include<iostream>
#include<unordered_set>
using namespace std;
int main() {
    unordered_set<int> s; // Defining a unordered set.

    // Inserting elements in the set => T.C. - O(1).
    // The elements are stored in random order. 
    // The sets contain only unique elements even they repeated it discarded repeated elements.
    s.insert(1);
    s.insert(3);
    s.insert(7);
    s.insert(2);
    s.insert(2);

    // Earse an element from the sets. => T.C. - O(1).
    s.erase(1);

    // Printing the sets element using for each loop.
    for(int ele : s) {
        cout<<ele<<" ";
    }

    // For the size of sets.
    cout<<endl<<s.size();

    // Searching an element in sets.
    // s.find() => searches in sets and if not found returns s.end() which is iterator 
    // next to the last value in set.
    int target = 7;
    if(s.find(target) != s.end()) { // It means it exists in set.
        cout<<endl<<"It exists...";
    }   
    else cout<<endl<<"Doesn't exists...";
}