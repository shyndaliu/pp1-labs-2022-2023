#include <bits/stdc++.h>
using namespace std;

string s;
int a, b;

int main(){
	cin>>s;
	for(int i=0; i<(int)s.length(); i+=2){
		a+=s[i];
	}
	for(int i=1; i<(int)s.length(); i+=2){
		b+=s[i];
	}
	if(a==b){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
