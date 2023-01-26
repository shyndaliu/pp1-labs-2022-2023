#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[1005], sum,k;

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>k;
		a[k]++;
	}
	for(int i=1; i<=1000; i++){
		sum+=i*(a[i]>0);
	}
	cout<<sum;
}
