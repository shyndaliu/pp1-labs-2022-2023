#include <bits/stdc++.h>
using namespace std;

int a[100005], n, x;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		cin>>x;
		cout<<abs(x-a[i])<<" ";
	}
}
