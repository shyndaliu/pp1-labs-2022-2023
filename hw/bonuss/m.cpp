#include <bits/stdc++.h>
using namespace std;

long long a, b, mode=1, cnt;
int main(){
	cin>>a>>b;
	if(a>b){
		mode=-1;
		swap(a, b);
	}
	while(b>a){
		if(b%2!=0){
			cout<<"NO";
			return 0;
		}
		b/=2;
		cnt++;
	}
	if(b==a){
		cout<<"YES "<<cnt*mode;
	}else{
		cout<<"NO";
	}
}
