#include <bits/stdc++.h>
using namespace std;

long long n,m, a[505][505], b[505];

int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
			b[i]+=a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		cout<<b[i]/m<<" ";
	}
}
