#include <bits/stdc++.h>
using namespace std;
#define ll long long

string s;

int main(){
	cin>>s;
	for(int i=0; i<(int)s.length(); i+=2){
		s[i]=toupper(s[i]);
	}
	cout<<s;
}
