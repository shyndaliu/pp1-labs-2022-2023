#include <bits/stdc++.h>
using namespace std;
#define ll long long



string s;
ll ans, pw=1;



int main(){
	cin>>s;
	for(int i=(int)s.length()-1; i>=0; i--){
		ans+=(s[i]-'0')*pw;
		pw*=2;
	}
	cout<<ans;
}
