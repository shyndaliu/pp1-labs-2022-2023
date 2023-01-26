#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, dp[46];

int main(){
	dp[1]=0;
	dp[2]=1;
	cin>>n;
	for(int i=3; i<=n; i++){
		dp[i]=dp[i-1]+dp[i-2];
		
	}
	cout<<dp[n];
}
