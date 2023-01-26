#include <bits/stdc++.h>
using namespace std;

string s;
char c;


int main(){
	cin>>s;
	for(int i=0; i<(int)s.length(); i++){
		if(s[i]=='z'){
			s[i]='a';
		}else{
			s[i]++;
		}
	}
	cout<<s;
}
