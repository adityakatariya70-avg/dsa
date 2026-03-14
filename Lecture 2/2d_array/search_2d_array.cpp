#include<iostream>
using namespace std;
bool isnumber(int matrix[][100], int n, int m, int x){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(x==matrix[i][j]){
				return 1;
			}
		}
	}
	return 0;
}


int main() {
	int n;
	int m;
    cin>>n;
    cin>>m;
	int matrix[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>matrix[i][j];
		}
	}
	int x;
	cin>>x;
	cout<<isnumber(matrix,n,m,x);
return 0;
}