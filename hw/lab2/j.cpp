#include <bits/stdc++.h>
using namespace std;

int n, x, ans;


int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		while(x>0){
			if(x%10==0){
			ans++;
			}
			x/=10;
		}
	}
	cout<<ans;
}
