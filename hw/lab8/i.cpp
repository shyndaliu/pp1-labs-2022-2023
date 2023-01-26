#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[105], k;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cin>>k;
	sort(a, a+n);
	int x=lower_bound(a, a+n, k)-a;
	if(a[x]==k){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}
