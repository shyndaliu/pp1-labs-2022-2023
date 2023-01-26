#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[100005], x;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cin>>x;
	int l=0, r=n-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x){
			cout<<"Yes";
			return 0;
		}else if(a[mid]<x){
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	cout<<"No";
}
