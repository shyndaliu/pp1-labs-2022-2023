#include <bits/stdc++.h>
using namespace std;

int n, ans, a;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a;
			if(i==j && i==0){
				ans=a;
			}
			ans=max(ans, a);
		}
	}
	cout<<ans; 
}
