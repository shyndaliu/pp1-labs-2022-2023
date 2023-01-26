#include <bits/stdc++.h>
using namespace std;
#define ll long long



string s;
string s1="abcdefghijklmnopqrstuvwxyz", s2="ABCDEFGHIJKLMNOPQRSTUVWXYZ";



int main(){
	getline(cin, s);
	for(int i=(int)s.length()-1; i>=0; i--){
		if(s[i]>='a' && s[i]<='z'){
			s[i]=s1[(s[i]-'a'+1)%26];
		}
		if(s[i]>='A' && s[i]<='Z'){
			s[i]=s2[(s[i]-'A'+1)%26];
		}
	}
	cout<<s;
}
