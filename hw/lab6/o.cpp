#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, sum;

int main(){
	cin>>n;
	int m=n%10;
	while(n>0){
	sum+=n%10;
	n/=10;
	}
	if(sum%m==0){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}
