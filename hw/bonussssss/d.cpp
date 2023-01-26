#include <bits/stdc++.h>
using namespace std;

int n;
string s="0123456789ABCDEF";
string s1="";

int main(){
	cin>>n;
	while(n>0){
		s1+=s[n%16];
		n/=16;
	}
	reverse(s1.rbegin(), s1.rend());
	cout<<s1;
}
