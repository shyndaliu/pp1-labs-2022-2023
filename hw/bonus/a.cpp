#include <bits/stdc++.h>
using namespace std;

int n, dp[1001];
int inf=2147483647;

int main(){
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	if(n%2==0){
		cout<<n/2;
	}else{
		cout<<n;
	}
}
