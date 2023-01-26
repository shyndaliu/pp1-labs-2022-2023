#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int a[100005], n, l, r;

int main(){
	cin>>n>>l>>r;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	for(int i=l, j=r; i<j; i++, j--){
		swap(a[i],a[j]);
	}
	for(int i=1; i<=n; i++){
		cout<<a[i]<<" ";
	}
}
