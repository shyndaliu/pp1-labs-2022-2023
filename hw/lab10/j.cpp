#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m, x;
vector <int> a;

int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>x;
		a.push_back(x);
	}
	reverse(a.begin(), a.end());
	rotate(a.begin(), a.begin()+(n-m) ,a.end());
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
