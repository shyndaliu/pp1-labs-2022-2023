#include <bits/stdc++.h>
using namespace std;

int n, m=1;
char a[1000][1000];

int main(){
	cin>>n;
	for(int i=1; i<n; i++){
		m+=2;
	}
	int l=m/2+1, r=m/2+1;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(j>=l && j<=r){
				a[i][j]='*';
			}else{
				a[i][j]='.';
			}
		}
		l--;
		r++;
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
