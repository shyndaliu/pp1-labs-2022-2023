#include <bits/stdc++.h>
using namespace std;

string s;
int ans, n;

int main(){
	cin>>s>>n;
	for(int i=0; i<(int)s.length(); i++){
		if(s[i]>='0' && s[i]<='9'){
			ans++;
		}
	}
	if(ans>=n){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
