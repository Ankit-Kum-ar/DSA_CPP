#include<iostream>
using namespace std;
int maze(int r, int c){
    if(r == 1 || c == 1) return 1;
    return (maze(r-1, c) + maze(r, c-1));
}
int main(){
    cout<<maze(2, 3);
}