#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, a[1005];

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a, a+n);
	reverse(a,a+n);
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
