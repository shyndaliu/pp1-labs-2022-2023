#include <bits/stdc++.h>
using namespace std;

int n, a[100005], sum, ans;

int main(){
	cin>>n>>a[0];
	sum+=a[0];
	ans=a[0];
	for(int i=1; i<n; i++){
		cin>>a[i];
		sum+=a[i];
		ans=max(a[i], ans);
	}
	cout<<sum<<" "<<ans;
}
