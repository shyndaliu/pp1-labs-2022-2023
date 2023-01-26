#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, x;
set <int> s;


int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		s.insert(x);
	}
	if(n==(int)s.size()){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
