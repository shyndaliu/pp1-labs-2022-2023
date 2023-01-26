#include <bits/stdc++.h>
using namespace std;
#define ll long long

string s;


int main(){
	cin>>s;
	for(int i=0, j=(int)s.length()-1; i<j; i++, j--){
		if(s[i]!=s[j]){
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
}
