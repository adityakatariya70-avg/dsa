#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> cars={"creta","baleno","alto","nano"};
    for(string car:cars){
        cout<<car<<endl;
    }
    return 0;
}