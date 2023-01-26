#include <bits/stdc++.h>
using namespace std;

int n, ans, ans2, a[1000][1000];

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
			if(i==j && i==0){
				ans=a[i][j];
			}
			if(a[i][j]>ans){
				ans=a[i][j];
			}
			ans2=min(ans2, a[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j]!=ans){
				if(ans2<a[i][j]){
					ans2=a[i][j];
				}
			}
		}
	}
	cout<<ans2; 
}
