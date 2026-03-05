#include<iostream>
#include<vector>
using namespace std;
int linearsearch(vector<int> & arr, int m){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
   cout<<linearsearch(arr,m)<<endl;
    return 0;
}