#include <bits/stdc++.h>
using namespace std;

int n, m, a, k;

int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a;
			k=sqrt(a);
			if(k*k==a){
				cout<<k<<" ";
			}else{
				cout<<a<<" ";
			}
		}
		cout<<endl;
	} 
}
