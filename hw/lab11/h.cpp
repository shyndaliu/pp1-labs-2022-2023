#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
string s;
string s1="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(){
	cin>>n>>s;
	for(int i=0; i<(int)s.length(); i++){
		s[i]=s1[(s[i]+n)%65%26];
	}
	cout<<s;
}
