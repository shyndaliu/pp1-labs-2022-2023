#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a, n, l, r, ans;

int main(){
	cin>>n>>l>>r;
	for(int i=1; i<=n; i++){
		cin>>a;
		if(i>=l && i<=r){
			ans+=a;
		}
	}
	cout<<ans;
}
