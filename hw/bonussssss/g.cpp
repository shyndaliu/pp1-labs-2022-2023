#include <bits/stdc++.h>
using namespace std;

int n, a[70];
bool was[70];
char c[70];
string s;

int main(){
	getline(cin, s);
	for(int i=0; i<(int)s.length(); i++){
		a[s[i]-'A']++;
	}
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>c[i];
		was[c[i]-'A']=1;
	}
	for(int i=0; i<60; i++){
		if(was[i]){
			cout<<(char)(i+'A')<<" - "<<a[i]<<endl;
		}
	}
}
