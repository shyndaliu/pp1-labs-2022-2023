#include <bits/stdc++.h>
using namespace std;


int n, k, x, ans;


int main(){
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>x;
		ans+=(x==k);
	}
	cout<<ans;
}
