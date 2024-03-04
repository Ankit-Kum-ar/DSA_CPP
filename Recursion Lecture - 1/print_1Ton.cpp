// Problem :- Print n to 1.

#include<iostream>
using namespace std;
void printReverse(int n){
    if(n == 0) return; // Base Case
    cout<<n<<endl;
    printReverse(n-1); // Recursive Relation
}
int main(){
    printReverse(7);
}