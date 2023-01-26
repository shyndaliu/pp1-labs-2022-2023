#include <bits/stdc++.h>
using namespace std;

int n, a, ans=-1;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		ans=max(ans,a);
	}
	cout<<ans;
}
