#include<iostream>
#include<vector>
using namespace std;
void reversearray(vector<int> &arr){
int s=arr.size();

for(int i=0;i<s/2;i++){
    swap(arr[i],arr[s-i-1]);
}
}
int main(){
    cout<<"Enter array ";
    int n;
    cin>>n;
   vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversearray(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   
    return 0;
}