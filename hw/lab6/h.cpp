#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;

int main(){
	cin>>n;
	while(n>0){
		int k=n%10;
		if(k%2!=0){
			cout<<"Not valid";
			return 0;
		}
		n/=10;
	}
	cout<<"Valid";
}
