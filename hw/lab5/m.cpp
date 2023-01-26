#include <bits/stdc++.h>
using namespace std;

string s;
char c;
int n, a[50];

int main(){
	cin>>s>>c>>n;
	for(int i=0; i<(int)s.length(); i++){
		a[s[i]-'a']++;
	}
	if(a[c-'a']==n){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
