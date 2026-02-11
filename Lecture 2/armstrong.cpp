#include<iostream>
#include<cmath>
using namespace std;
int main(){
    
int n;
cin>>n;
int og=n;
int sum=0;
int temp=n;

int i=0;
while(temp!=0){
    temp=temp/10;
    i++;
}

while(n!=0){
    int k=n%10;
    sum=sum+pow(k,i);
    n=n/10;
}
if (og==sum){
    cout<<"Armstrong"<<endl;
}
else{
cout<<"Not Armstrong"<<endl;
}
return 0;
}