#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cin>>n;
    while(n>0){
    int x=n%10;
    sum=sum+x;
n=n/10;
    }
cout<<sum;
return 0;


}