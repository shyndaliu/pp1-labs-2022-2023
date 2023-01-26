#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ans;
string s;

int main(){
	cin>>s;
	for(int i=0; i<(int)s.length(); i++){
		ans+=(s[i]>='0' && s[i]<='9')*(s[i]-'0');
	}
	cout<<ans;
}
