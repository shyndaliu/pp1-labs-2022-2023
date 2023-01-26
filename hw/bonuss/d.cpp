#include <bits/stdc++.h>
using namespace std;

int n, a[1005], b[1005], mx=-1;
int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		b[a[i]]++;
		mx=max(mx, b[a[i]]);
	}
	sort(a, a+n);
	reverse(a, a+n);
	for(int i=0; i<n; i++){
		if(b[a[i]]==mx){
			cout<<a[i]<<" ";
			b[a[i]]=-1;
		}
	}
}
