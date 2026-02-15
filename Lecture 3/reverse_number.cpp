#include<iostream>
using  namespace std;
int main(){
    long reverse=0;
    long num;
    cin>>num;
    while(num>0){
    int x=num%10;
reverse=reverse*10+x;
num=num/10;
    }
cout<<reverse;
return 0;
}
