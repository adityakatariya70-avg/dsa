#include<vector>
#include<iostream>
using namespace std;
vector<int> multi(vector<int> & arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int product=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                product*=arr[j];
            }
        }
        arr[i]=product;
    }
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>result=multi(arr);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;

}