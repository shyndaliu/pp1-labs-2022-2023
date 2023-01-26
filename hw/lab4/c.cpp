#include <bits/stdc++.h>
using namespace std;

int n, m ,ans, a;

int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a;
			if(a<0){
				ans++;
			}
		}
	}
	cout<<ans; 
}
