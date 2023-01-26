#include <bits/stdc++.h>
using namespace std;

int a, n, ans=-1;

int main(){
	cin>>n>>a;
	ans=a;
	int ind=1;
	for(int i=1; i<n; i++){
		cin>>a;
		if(a>ans){
			ans=a;
			ind=i+1;
		}
	}
	cout<<ind;
}
