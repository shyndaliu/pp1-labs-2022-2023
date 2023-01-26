#include <bits/stdc++.h>
using namespace std;

int m, s, x, y;

int main(){
	cin>>m>>s>>x>>y;
	s+=(m-min(m,x));
	m=min(m,x);
	if(m>=x && s>=y){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}
