#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;

int main(){
	cin>>n;
	if(n==1){
		cout<<"Yes";
		return 0;
	}
	while(n>1){
		if(n%2==1){
			cout<<"No";
			return 0;
		}
		n/=2;
	}
	cout<<"Yes";
}
