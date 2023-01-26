#include <bits/stdc++.h>
using namespace std;

string s;
char c;


int main(){
	cin>>s;
	c=s[0];
	for(int i=0; i<(int)s.length(); i++){
		c=max(c,s[i]);
	}
	cout<<c;
}
