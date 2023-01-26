#include <bits/stdc++.h>
using namespace std;

int n, a[2], x;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		a[x%2]++;
	}
	cout<<a[0]<<" "<<a[1];
}
