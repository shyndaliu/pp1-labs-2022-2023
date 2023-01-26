#include <bits/stdc++.h>
using namespace std;

int a,b, c[105], d[105];
int n, ans;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		c[a]++;
	}
	for(int i=0; i<n; i++){
		cin>>b;
		d[b]++;
	}
	for(int i=0; i<=100; i++){
		ans+=min(c[i],d[i]);
	}
	cout<<ans;
}
