#include<iostream>
#include<vector> //vector header file
using namespace std;
int main(){
    vector<string> cars={"creta","baleno","alto","nano"}; //vector of string type and initialization
    cout<<cars[0]<<endl; //access through index
    cout<<cars.front()<<endl; //access through front function
    cout<<cars.back()<<endl; //access through back function
    cout<<cars.at(2)<<endl; //access through at function
    cars[1]="honda";
    cars[2]="hyundai";
    cout<<cars.at(1)<<endl;
    cout<<cars.at(2)<<endl;
    cars.push_back("swift"); //inserting element at the end of vector
    cout<<cars[4]<<endl;
    cars.pop_back();
    cout<<cars.back()<<endl; //after pop_back the last element is removed
    for( string car : cars){ //traversing the vector using for each loop
        cout<<car<<endl;
    }
    
    return 0;
}