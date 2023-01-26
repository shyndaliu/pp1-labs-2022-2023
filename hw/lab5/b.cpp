#include <bits/stdc++.h>
using namespace std;

string s, t;

int main(){
	cin>>s>>t;
	int lent=(int)t.length();
	for(int i=0; i<(int)s.length(); i++){
		string x=s.substr(i, lent);
		if(x==t){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
}
