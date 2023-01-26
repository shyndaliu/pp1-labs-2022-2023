#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;

void f(int x){
	for(int i=0; i<x; i++){
		cout<<x<<" ";
	}
}

int main(){
	cin>>n;
	for(int i=1; i<=n; i++){
		f(i);
	}
}
