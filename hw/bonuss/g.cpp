#include <bits/stdc++.h>
using namespace std;

int n, m ,mode;
int main(){
	cin>>n>>m>>mode;
	if(mode==1){
	     for(int i=n; i<=m; i++){
	     	int k=sqrt(i);
	     	if(k*k==i){
	     		cout<<i<<" ";
			 }
		 }	
	}else{
		for(int i=m; i>=n; i--){
	     	int k=sqrt(i);
	     	if(k*k==i){
	     		cout<<i<<" ";
			 }
		 }
	}
}
