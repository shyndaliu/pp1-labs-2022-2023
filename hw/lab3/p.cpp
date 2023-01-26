#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k;

int main(){
	cin>>n;
	k=sqrt(n);
	if(n==k*k){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}
