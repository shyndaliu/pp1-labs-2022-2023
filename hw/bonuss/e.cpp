#include <bits/stdc++.h>
using namespace std;

long long n, sum;
int main(){
	cin>>n;
	while(n>10){
		sum+=n%10;
		n/=10;
	}
	if(n==sum%10){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
