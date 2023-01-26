#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m;
int a[105][105], b[105][105];


int main(){
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		cin>>a[i][1];
		b[i][1]=a[i][1];
		for(int j=2; j<=m; j++){
			cin>>a[i][j];
			b[i][j]=b[i][j-1]+a[i][j];
		}
	}
	for(int i=2; i<=n; i++){
		for(int j=2; j<=m; j++){
			int k=(b[i][j]-b[i][j-2])+(b[i-1][j]-b[i-1][j-2]);
			if(k==4 || k==0){
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
}
