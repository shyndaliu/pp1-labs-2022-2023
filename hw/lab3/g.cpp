#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int a[100005], n, m1, m2;

int main(){
	cin>>n>>a[0];
	m1=a[0];
	m2=a[0];
	for(int i=1; i<n; i++){
		cin>>a[i];
		m1=min(m1,a[i]);
		m2=max(m2, a[i]);
	}
	for(int i=0; i<n; i++){
		if(a[i]==m2){
			cout<<m1<<" ";
		}else{
			cout<<a[i]<<" ";
		}
	}
}
