#include <bits/stdc++.h>
using namespace std;

int n, ans, x;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		if(x%10==7){
			ans++;
		}
	}
	cout<<ans;
}
