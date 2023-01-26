#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a, n, ans;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		ans+=a;
	}
	cout<<ans;
}
