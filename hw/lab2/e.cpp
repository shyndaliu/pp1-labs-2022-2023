#include <bits/stdc++.h>
using namespace std;

int n, k;

int main(){
	cin>>n>>k;
	if(n<k){
		cout<<2;
	}else if(n>k){
		cout<<1;
	}else{
		cout<<0;
	}
}
