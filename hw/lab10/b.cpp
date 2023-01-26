#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;

ll f(ll x){
	ll ans=1;
	for(ll i=1; i<=x; i++){
		ans*=x;
	}
	return ans;
}

int main() {
    cin>>n;
    for(ll i=0; i<=n; i++){
    	cout<<f(i)<<" ";
	}
}
