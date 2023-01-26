#include <bits/stdc++.h>
using namespace std;

int n, a[1000][1000];

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	int sum=0;
	for(int i=0; i<n; i++){
		sum+=a[i][n-1-i];
	}
	cout<<sum;
}
