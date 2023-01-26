#include <bits/stdc++.h>
using namespace std;
#define ll long long



string s, s1="";



int main(){
	cin>>s;
	for(int i=0; i<(int)s.length(); i++){
		if(s[i]>='a' && s[i]<='z'){
			s1+=s[i];
		}
		if(s[i]>='A' && s[i]<='Z'){
			s1+=s[i];
		}
	}
	cout<<s1;
}
