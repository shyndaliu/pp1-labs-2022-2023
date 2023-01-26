#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int a[100005], n, x;

int main(){
	cin>>n>>x;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int k=lower_bound(a, a+n, x)-a;
	if(a[k]==x){
		k++;
	}
	cout<<k;
}
