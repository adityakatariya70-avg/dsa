#include<iostream>
using namespace std;
int twosum(int nums[], int size, int target){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(nums[i]+nums[j]==target){
                cout<<"The 1st no is : "<<nums[i]<<" and the second is : "<<nums[j];
        return 0;
            }
        }
    }
}

int main(){
    int nums[]={2,7,4,8,5};
    int target=13;
int size= sizeof(nums)/sizeof(nums[0]);
    twosum(nums, size,target);
    return 0;
}