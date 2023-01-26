#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
string s;

bool ch(string x){
	for(int i=0; i<(int)x.length(); i++){
		if(x[i]<'0' || x[i]>'9'){
			return 0;
		}
	}
	return 1;
}

int main(){
	cin>>s>>n;
	for(int i=0; i<(int)s.length()-n; i++){
		if(s[i]>='0' && s[i]<='9'){
			if(ch(s.substr(i,n))==1){
				cout<<"Valid";
				return 0;
			}
		}
	}
	cout<<"Not valid";
}
