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
	for(int i=0; i<k; i++){
		cout<<a[i]<<" ";
	}
}
