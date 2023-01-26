#include <bits/stdc++.h>
using namespace std;

int n, m, a, ans=100000, id;

int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++){
		int sum=0;
		for(int j=0; j<m; j++){
			cin>>a;
			sum+=a;
		}
		if(sum<ans){
			ans=sum;
		    id=i+1;	
		}
	}
	cout<<id; 
}
