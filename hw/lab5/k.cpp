#include <bits/stdc++.h>
using namespace std;

string s;
int n;


int main(){
	cin>>s;
	for(int i=0; i<(int)s.length(); i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			n++;
		}
	}
	cout<<n;
}
