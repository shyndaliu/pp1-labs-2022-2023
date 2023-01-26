#include <bits/stdc++.h>
using namespace std;

int n, a[105];
int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(a[i]%2==0){
			cout<<a[i]<<" ";
		}
	}
	for(int i=0; i<n; i++){
		if(a[i]%2==1){
			cout<<a[i]<<" ";
		}
	}
}
