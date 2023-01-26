#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[100005];

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=n-1; i>=0; i--){
		cout<<a[i]<<" ";
	}
}
