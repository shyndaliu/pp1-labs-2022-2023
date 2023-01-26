#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[105], ans1=2000, ans2=-1;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		ans1=min(ans1, a[i]);
		ans2=max(ans2, a[i]);
	}
	cout<<abs(ans1-ans2);
}
