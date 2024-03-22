#include<iostream>
#include<vector>
using namespace std;
void printSubsets(int arr[], vector<int> ans, int n,int i){
    if(i == n){
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        cout<<endl;
        return;
    }
    printSubsets(arr,ans,n,i+1);
    ans.push_back(arr[i]);
    printSubsets(arr,ans,n,i+1);
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    printSubsets(arr, ans, n, 0);
}