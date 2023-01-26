#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sum;
string s;

int main(){
	cin>>s;
	for(int i=0; i<(int)s.length(); i++){
		sum+=(s[i]-'0');
	}
	cout<<sum;
}
