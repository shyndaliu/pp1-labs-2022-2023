#include <bits/stdc++.h>
using namespace std;

int a, n, ans=-1;

int main(){
	cin>>n>>a;
	ans=a;
	for(int i=1; i<n; i++){
		cin>>a;
		ans=max(ans,a);
	}
	cout<<ans;
}
