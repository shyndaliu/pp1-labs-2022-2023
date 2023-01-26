#include <bits/stdc++.h>
using namespace std;

int a[1000005], x, n;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		a[x]++;
	}
	cin>>n;
	if(a[n]>0){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}
