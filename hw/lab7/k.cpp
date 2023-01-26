#include <bits/stdc++.h>
using namespace std;
#define ll long long

string s;
int ans=-1;

int main(){
	cin>>s;
	for(int i=0; i<(int)s.length(); i++){
		ans=max(ans, s[i]-'0');
	}
	cout<<ans;
}
