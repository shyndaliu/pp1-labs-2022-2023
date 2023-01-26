#include <bits/stdc++.h>
using namespace std;

int n, a[105][105];
int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j]!=a[j][i]){
				cout<<"Not perfect.";
				return 0;
			}
		}
	}
	cout<<"Perfect.";
}
