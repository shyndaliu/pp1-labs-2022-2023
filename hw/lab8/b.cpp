#include <bits/stdc++.h>
using namespace std;

int n, a[100005];

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	reverse(a, a+n);
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
