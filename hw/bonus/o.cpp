#include <bits/stdc++.h>
using namespace std;

string s;
int main(){
	cin>>s;
	for(int i=0, j=3; i<j; i++, j--){
		if(s[i]!=s[j]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}
