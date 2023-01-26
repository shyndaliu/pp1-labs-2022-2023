#include <bits/stdc++.h>
using namespace std;

string s, t;
int a[50], b[50];

int main(){
	cin>>s>>t;
	for(int i=0; i<(int)s.length(); i++){
		a[s[i]-'a']++;
	}
	for(int i=0; i<(int)t.length(); i++){
		b[t[i]-'a']++;
	}
	for(int i=0; i<=26; i++){
		if(a[i]!=b[i]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}
