#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, a;
vector <ll> b;
ll k,ans;

bool f(int x){
	for(int i=2; i<x; i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		b.push_back(a);
	}
	cin>>k;
	for(int i=0; i<(int)b.size(); i++){
		if(b[i]>=k && f(b[i])==1){
			ans++;
		}
	}
	cout<<ans;
}
