#include <bits/stdc++.h>
using namespace std;

int a, n, ans;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		if(a>0){
			ans++;
		}
	}
	cout<<ans;
}
