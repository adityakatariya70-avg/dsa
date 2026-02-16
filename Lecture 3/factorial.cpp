#include<iostream>
using namespace std;
int main(){
   long long n;
   long long fact=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        cout<<fact;
       
    }
    return 0;
}