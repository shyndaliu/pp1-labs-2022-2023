#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int x[200005], n, m, a;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x[i];
	}
	cin>>m;
	for(int i=n; i<n+m; i++){
		cin>>x[i];
	}
	sort(x, x+n+m);
	for(int i=0; i<n+m; i++){
		cout<<x[i]<<" ";
	}
}
