#include <bits/stdc++.h>
using namespace std;

int n, ans, ii, ij, a;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a;
			if(i==j && i==0){
				ans=a;
				ii=i, ij=j;
			}
			if(a>ans){
				ans=a;
				ii=i, ij=j;
			}
		}
	} 
	cout<<ii+1<<" "<<ij+1;
}
