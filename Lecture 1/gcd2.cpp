#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=min(a,b);i>=1;i--){
    if(a%i==0 and b%i==0){
    cout<<i<<endl;
    }

    }
   return 0;
}