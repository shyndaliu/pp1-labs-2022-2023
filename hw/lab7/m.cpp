#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, a[105], sum;



int main(){
	cin>>n>>k;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1; i<=n; i++){
		if(a[i]-a[i-1]<=k){
			sum++;
		}
		if(sum>=2){
			cout<<"cheater";
			return 0;
		}
	}
	cout<<"no";
}
