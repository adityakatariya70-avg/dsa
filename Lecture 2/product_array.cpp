#include<iostream>
#include<vector>
using namespace std;
vector<int> multiply(vector<int>&arr){
    int n=arr.size();
    vector<int>ans(n,1);

    for(int i=1;i<n;i++){
        ans[i]= ans[i-1]*arr[i-1];
    }
  
    int right=1;
    for(int i=n-2;i>=0;i--){
        right*=arr[i+1];
        ans[i]*=right;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result=multiply(arr);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }

return 0;
}