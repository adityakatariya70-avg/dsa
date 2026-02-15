#include<iostream>
using namespace std;
int countsum(long num, int digit){
    int count=0;
    while(num>0){
        int  j=num%10;
        if(j==digit){
            count++;
        }
        num=num/10;
    }
    return count;
}

int main()
{
int num;
int digit;
cin>>num;
cin>>digit;
cout<<countsum(num,digit);
return 0;
}