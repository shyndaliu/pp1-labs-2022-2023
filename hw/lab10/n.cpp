#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, x;

void f(int y){
	vector <int> b;
	while(y>0){
		b.push_back(y%2);
		y/=2;
	}
	for(int i=(int)b.size()-1; i>=0; i--){
		cout<<b[i];
	}
	cout<<endl;
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		f(x);
	}
}
