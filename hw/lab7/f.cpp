#include <bits/stdc++.h>
using namespace std;
#define ll long long

string s;
int ans;

int main(){
	cin>>s;
	for(int i=0; i<(int)s.length(); i++){
		if((s[i]-'0')%2==0){
			ans++;
		}
	}
	cout<<ans;
}
